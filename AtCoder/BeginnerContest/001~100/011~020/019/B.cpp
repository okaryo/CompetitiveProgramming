#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int tmp = 1;
  for (int i = 0; i < s.size(); i ++) {
    if (i == s.size() - 1) {
      cout << s.at(i) << tmp;
    } else if (s.at(i) == s.at(i + 1)) {
      tmp ++;
    } else {
      cout << s.at(i) << tmp;
      tmp = 1;
    }
  }
  cout << endl;
}
