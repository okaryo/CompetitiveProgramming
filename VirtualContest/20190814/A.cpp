#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int n = s.size();
  vector<int> rl;
  for (int i = 1; i < n; i ++) {
    if (s[i - 1] == 'R' && s[i] == 'L') rl.push_back(i - 1);
  }

  vector<int> ans(n, 0);
  rep(i, n) {
    int x = lower_bound(rl.begin(), rl.end(), i) - rl.begin();
    if (s[i] == 'R') {
      if ((rl[x] - i) % 2 == 0) ans[rl[x]] ++;
      else ans[rl[x] + 1] ++;
    } else {
      x --;
      if (x < 0) x = 0;
      if ((i - rl[x] + 1) % 2 == 0) ans[rl[x] + 1] ++;
      else ans[rl[x]] ++;
    }
  }

  rep(i, n) {
    if (i) cout << " ";
    cout << ans[i];
  }
  cout << endl;
}