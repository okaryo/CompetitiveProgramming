#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i += 2) {
    if (i == s.size() - 1) {
      cout << s.at(i) << endl;
    } else {
      cout << s.at(i);
    }
  }
}
