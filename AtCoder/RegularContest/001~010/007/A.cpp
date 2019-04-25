#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  string s;
  cin >> c >> s;

  for (int i = 0; i < s.size(); i ++) {
    if (c == s.at(i)) continue;
    cout << s.at(i);
  }
  cout << endl;
}
