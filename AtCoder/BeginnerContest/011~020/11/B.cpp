#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s.at(0) >= 97) {
    s.at(0) -= 32;
  }
  for (int i = 1; i < s.size(); i ++) {
    if (s.at(i) <= 90) {
      s.at(i) += 32;
    }
  }
  cout << s << endl;
}
