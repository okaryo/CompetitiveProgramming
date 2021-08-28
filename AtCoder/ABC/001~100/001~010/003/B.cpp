#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  string a = "atcoder@";
  for (int i = 0; i < s.size(); i ++) {
    bool x = false;
    if (s.at(i) == '@') {
      for (int j = 0; j < 8; j ++) {
        if (t.at(i) == a.at(j)) {
          x = true;
          break;
        }
      }
    } else if (t.at(i) == '@') {
      for (int j = 0; j < 8; j ++) {
        if (s.at(i) == a.at(j)) {
          x = true;
          break;
        }
      }
    } else if (s.at(i) != t.at(i)) {
      cout << "You will lose" << endl;
      return 0;
    } else {
      x = true;
    }

    if (!x) {
      cout << "You will lose" << endl;
      return 0;
    }
  }

  cout << "You can win" << endl;
}
