#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;

  for (int i = 0; i < k; i ++) {
    if (s.at(i) != '1') {
      cout << s.at(i) << endl;
      return 0;
    }
  }

  cout << 1 << endl;
}
