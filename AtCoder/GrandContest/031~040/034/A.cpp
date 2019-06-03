#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  a --, b --, c --, d --;
  string s;
  cin >> s;

  bool sunuke = true, funuke = true;
  if (c < d) {
    for (int i = b + 1; i <= d; i ++) {
      if (s[i] == '#' && s[i - 1] == '#') {
        funuke = false;
        break;
      }
    }
    for (int i = a + 1; i <= c; i ++) {
      if (s[i] == '#' && s[i - 1] == '#') {
        sunuke = false;
        break;
      }
    }
  } else {
    for (int i = b + 1; i <= d; i ++) {
      if (s[i] == '#' && s[i - 1] == '#') {
        funuke = false;
        break;
      }
    }
    bool check = false;
    for (int i = a + 1; i <= c; i ++) {
      if (s[i] == '.' && s[i - 1] == '.' && s[i - 2] == '.' && i - 1 >= b && i <= d + 1) check = true;
      if (s[i] == '#' && s[i - 1] == '#') {
        sunuke = false;
        break;
      }
    }
    if (!check) sunuke = false;
  }

  string ans;
  if (sunuke && funuke) ans = "Yes";
  else ans = "No";
  cout << ans << endl;
}