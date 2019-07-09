#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  string s = "";
  for (int i = 0; i < n; i ++) {
    char t; cin >> t;
    s += t;
  }

  bool flag = false;
  for (int i = 1; i < n; i ++) {
    if (s[i] != s[i - 1]) {
      string a = s.substr(0, i + 1);
      string b = s.substr(i);
      s = b + a;
      flag = true;
      break;
    }
  }
  
  int ans = 1;
  if (flag) {
    int cnt = 1;
    for (int i = 1; i < n; i ++) {
      if (s[i] != s[i - 1]) {
        ans = max(ans, (cnt - 1) / 2 + 1);
        cnt = 1;
      } else {
        cnt ++;
      }
    }
    ans = max(ans, (cnt - 1) / 2 + 1);
  } else {
    ans = -1;
  }

  cout << ans << endl;
}