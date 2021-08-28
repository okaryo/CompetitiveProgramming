#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size() - 1; i ++) {
    for (int j = i + 1; j < s.size(); j ++) {
      if (s.at(i) == s.at(j)) {
        cout << "no" << endl;
        return 0;
      }
    }
  }
  cout << "yes" << endl;
}
