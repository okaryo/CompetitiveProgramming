#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i ++) cin >> s[i];

  string ans = "DRAW";
  bool flag = false;
  for (int i = 1; i < n; i ++) {
    if (s[i][0] != s[i - 1].back()) {
      if (i % 2 == 0) ans = "LOSE";
      else ans = "WIN";
      break;
    }
    for (int j = 0; j < i; j ++) {
      if (s[j] == s[i]) {
        if (i % 2 == 0) ans = "LOSE";
        else ans = "WIN";
        flag = true;
        break;
      }
    }
    if (flag) break;
  }

  cout << ans << endl;
}