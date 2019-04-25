#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (n % 2 == 0 || s.at(n / 2) != 'b') {
    cout << -1 << endl;
    return 0;
  }

  for (int i = 0; i < n; i ++) {
    if (n % 3 + i == 0 && s.at(i) != 'a') {
      cout << -1 << endl;
      return 0;
    } else if (n % 3 + i == 1 && s.at(i) != 'b') {
      cout << -1 << endl;
      return 0;
    } else if (n % 3 + i == 2 && s.at(i) != 'c') {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << n / 2 << endl;
}
