#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string s, kit;
  cin >> s >> kit;

  int name[26] = {};
  for (int i = 0; i < n; i ++) {
    name[s[i] - 'A'] ++;
  }
  int cnt[26] = {};
  for (int i = 0; i < m; i ++) {
    cnt[kit[i] - 'A'] ++;
  }

  int ans = 0;
  bool check = false;
  for (int i = 0; i < 26; i ++) {
    if (cnt[i] > 0) {
      ans = max(ans, (name[i] + cnt[i] - 1) / cnt[i]);
    }
    if (name[i] > 0 && cnt[i] == 0) check = true;
  }

  if (check) ans = -1;
  cout << ans << endl;
}