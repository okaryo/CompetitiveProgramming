#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s; cin >> s;
  int y = stoi(s.substr(0, 4));
  int m = stoi(s.substr(5, 2));
  int d = stoi(s.substr(8, 2));

  bool uru = false;
  if (y % 4 == 0 && !(y % 100 == 0 && y % 400 != 0)) uru = true;

  int j;
  for (int i = m; i <= 12; i ++) {
    for (j = d; j <= 31; j ++) {
      if ((j == 2 || j == 4 || j == 6 || j == 9 || j == 11) && j == 31) continue;
      if (i == 2 && (j == 30 || (j == 29 && !uru))) continue;

      if (y % (i * j) == 0) {
        cout << y << "/";
        if (i < 10) cout << 0;
        cout << i << "/";
        if (j < 10) cout << 0;
        cout << j << endl;
        return 0;
      }
    }
    j = 1;
  }

  cout << y + 1 << "/01/01" << endl;
}
