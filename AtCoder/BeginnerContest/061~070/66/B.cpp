#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans;
  for (int i = 2; i < s.size(); i += 2) {
    string x, y;
    for (int j = 0; j < (s.size() - i) / 2; j ++) {
      x += s.at(j);
    }
    for (int j = (s.size() - i) / 2; j < s.size() - i; j ++) {
      y += s.at(j);
    }
    if (x == y) {
      ans = s.size() - i;
      break;
    }
  }

  cout << ans << endl;
}
