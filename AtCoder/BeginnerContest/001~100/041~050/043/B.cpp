#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string ans = "";
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == 'B' && ans.size() > 0) {
      ans.pop_back();
    } else if (s.at(i) != 'B') {
      ans += s.at(i);
    }
  }

  cout << ans << endl;
}
