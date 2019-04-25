#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int west = 0, east = 0;
  for (int i = 0; i < n; i ++) {
    if (s.at(i) == 'E') east ++;
  }

  int ans = east;
  for (int i = 0; i < n; i ++) {
    if (s.at(i) == 'E') east --;
    int tmp = west + east;
    ans = min(ans, tmp);
    if (s.at(i) == 'W') west ++;
  }

  cout << ans << endl;
}
