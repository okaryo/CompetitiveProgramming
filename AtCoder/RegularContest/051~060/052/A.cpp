#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) >= 48 && s.at(i) <= 57) {
      cout << s.at(i);
    }
  }
  cout << endl;
}
