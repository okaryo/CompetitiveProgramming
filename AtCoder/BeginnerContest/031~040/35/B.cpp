#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int t;
  cin >> s >> t;

  int lr = 0, ud = 0, q = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == 'L') {
      lr --;
    } else if (s.at(i) == 'R') {
      lr ++;
    } else if (s.at(i) == 'U') {
      ud ++;
    } else if (s.at(i) == 'D') {
      ud --;
    } else {
      q ++;
    }
  }
  int ans = abs(lr) + abs(ud);
  if (t == 1) {
    ans += q;
  } else if (ans >= q) {
    ans -= q;
  } else if ((q - ans) % 2 == 0) {
    ans = 0;
  } else {
    ans = 1;
  }

  cout << ans << endl;
}
