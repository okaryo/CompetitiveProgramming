#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s, t;
  cin >> s >> t;
  vector<int> s_num(26, 0), t_num(26, 0);
  vector<vector<int>> a(26);
  rep(i, s.size()) {
    s_num[s[i] - 'a'] ++;
    a[s[i] - 'a'].push_back(i + 1);
  }
  rep(i, t.size()) t_num[t[i] - 'a'] ++;
  rep(i, 26) {
    if (s_num[i] == 0 && t_num[i] > 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  LL ans = a[t[0] - 'a'][0];
  LL pos_before_char = a[t[0] - 'a'][0];
  for (LL i = 1; i < t.size(); i ++) {
    int j = t[i] - 'a';
    int x = lower_bound(a[j].begin(), a[j].end(), pos_before_char + 1) - a[j].begin();
    if (x == a[j].size()) {
      ans += s.size() - pos_before_char + a[j][0];
      pos_before_char = a[j][0];
    } else {
      ans += a[j][x] - pos_before_char;
      pos_before_char = a[j][x];
    }
  }

  cout << ans << endl;
}