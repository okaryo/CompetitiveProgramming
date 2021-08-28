#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(3);
  for (int i = 0; i < 3; i ++) {
    cin >> a.at(i);
  }

  vector<int> b = {a.at(0), a.at(1), a.at(2)};
  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());
  for (int i = 0; i < 3; i ++) {
    if (a.at(i) == b.at(0)) {
      cout << 1 << endl;
    } else if (a.at(i) == b.at(1)) {
      cout << 2 << endl;
    } else {
      cout << 3 << endl;
    }
  }
}
