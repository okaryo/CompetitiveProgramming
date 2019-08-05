#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  LL n = s.size();
  vector<LL> a;
  for (int i = 1; i < n; i ++) {
    if (s[i - 1] == 'R' && s[i] == 'L') {
      a.push_back(i - 1);
    }
  }

  int x, d;
  vector<LL> ans(n, 0);
  for (int i = 0; i < n; i ++) {
    if (s[i] == 'R') {
      x = lower_bound(a.begin(), a.end(), i) - a.begin();
      d = a[x];
      if ((d - i) % 2 == 0) ans[d] ++;
      else ans[d + 1] ++;
    } else if (s[i] == 'L') {
      x = lower_bound(a.begin(), a.end(), i) - a.begin() - 1;
      if (x < 0) x = 0;
      d = a[x];
      if ((i - d + 1) % 2 == 0) ans[d + 1] ++;
      else ans[d] ++;
    }
  }

  for (int i = 0; i < n; i ++) {
    if (i) cout << " ";
    cout << ans[i];
  }
}