#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int i = 0;
  while (i < s.size()) {
    if (s.at(i) == 'o' || s.at(i) == 'k' || s.at(i) == 'u') {
      i ++;
    } else if (s.at(i) == 'c' && s.at(i + 1) == 'h' && i != s.size() - 1) {
      i += 2;
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}
