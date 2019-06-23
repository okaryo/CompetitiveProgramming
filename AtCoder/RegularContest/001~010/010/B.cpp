#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int month[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};

int main() {
  int n; cin >> n;

  vector<bool> day(366 + 1, false);
  for (int i = 1; i <= 366; i ++) {
    if (i % 7 == 0 || i % 7 == 1) day[i] = true;
  }
  for (int i = 0; i < n; i ++) {
    string s; cin >> s;
    for (int j = 0; j < s.size(); j ++) {
      if (s[j] == '/') {
        int m = stoi(s.substr(0, j));
        int d = stoi(s.substr(j + 1));
        int sum_day = month[m - 1] + d;
        while (day[sum_day] == true) sum_day ++;
        if (sum_day > 366) sum_day %= 366;
        day[sum_day] = true;
        break;
      }
    }
  }

  int ans = 0, cnt = 0;
  for (int i = 1; i <= 366; i ++) {
    if (day[i]) cnt ++;
    else cnt = 0;
    ans = max(ans, cnt);
  }
  cout << ans << endl;
}