#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, h, n;
  cin >> l >> h >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  for (int i = 0; i < n; i ++) {
    if (a.at(i) > h) {
      cout << -1 << endl;
    } else if (a.at(i) >= l && a.at(i) <= h) {
      cout << 0 << endl;
    } else {
      cout << l - a.at(i) << endl;
    }
  }
}
