#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans = 1000;
  for (int i = 2; i < s.size(); i ++) {
    int tmp = (s.at(i - 2) - '0') * 100 + (s.at(i - 1) - '0') * 10 + (s.at(i) - '0');
    if (ans >= abs(753 - tmp)) {
      ans = abs(753 - tmp);
    }
  }

  cout << ans << endl;
}
