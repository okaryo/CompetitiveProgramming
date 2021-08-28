#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<string> a = {"SS", "SW", "WS", "WW"};
  s = s + s[0];
  string ans = "-1";
  for (int i = 0; i < 4; i ++) {
    string tmp = a[i];
    for (int j = 1; j <= n; j ++) {
      if (s[j] == 'o' && tmp[j] == 'S') {
        if (tmp[j - 1] == 'S') tmp += 'S';
        else tmp += 'W';
      } else if (s[j] == 'o' && tmp[j] == 'W') {
        if (tmp[j - 1] == 'S') tmp += 'W';
        else tmp += 'S';
      } else if (s[j] == 'x' && tmp[j] == 'S') {
        if (tmp[j - 1] == 'S') tmp += 'W';
        else tmp += 'S';
      } else if (s[j] == 'x' && tmp[j] == 'W') {
        if (tmp[j - 1] == 'S') tmp += 'S';
        else tmp += 'W';
      }
    }
    if (tmp[0] == tmp[n] && tmp[1] == tmp[n + 1]) ans = tmp.substr(0, n);
  }

  cout << ans << endl;
}