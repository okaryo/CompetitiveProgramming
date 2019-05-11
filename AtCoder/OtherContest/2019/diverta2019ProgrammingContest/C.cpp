#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> cnt(4);
  for (int i = 0; i < n; i ++) {
    string s;
    cin >> s;
    if (s[0] == 'B' && s.back() == 'A') cnt[0] ++;
    else if (s[0] == 'B') cnt[1] ++;
    else if (s.back() == 'A') cnt[2] ++;

    for (int j = 1; j < s.size(); j ++) {
      if (s[j - 1] == 'A' && s[j] == 'B') cnt[3] ++;
    }
  }

  int ans = cnt[3];
  if (cnt[0] > 0) {
    ans += cnt[0] - 1;
    if (cnt[1]) {
      ans ++;
      cnt[1] --;
    }
    if (cnt[2]) {
      ans ++;
      cnt[2] --;
    }
  }
  ans += min(cnt[1], cnt[2]);

  cout << ans << endl;
}