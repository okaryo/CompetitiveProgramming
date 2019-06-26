#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s; cin >> s;
  int y = stoi(s.substr(0, 4));
  int m = stoi(s.substr(5, 2));
  int d = stoi(s.substr(8, 2));

  bool uru = false;
  if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) uru = true;

  int day = d;
  for (int month = m; month <= 12; month ++) {
    for (; day <= 31; day ++) {
      if (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)) break;
      if (month == 2 && (day == 30 || (day == 29 && !uru))) break;

      if (y % month == 0 && (y / month) % day == 0) {
        cout << y << "/";
        if (month < 10) cout << 0;
        cout << month << "/";
        if (day < 10) cout << 0;
        cout << day << endl;
        return 0;
      }
    }
    day = 1;
  }

  cout << y + 1 << "/01/01" << endl;
}
