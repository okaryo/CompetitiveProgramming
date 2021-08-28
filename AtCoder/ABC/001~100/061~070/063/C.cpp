#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum = 0;
  bool m = false;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    sum += a.at(i);
    if (a.at(i) % 10 != 0) {
      m = true;
    }
  }

  if (sum % 10 != 0) {
    cout << sum << endl;
  } else if (!m) {
    cout << 0 << endl;
  } else {
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i ++) {
      if (a.at(i) % 10 != 0) {
        sum -= a.at(i);
        cout << sum << endl;
        return 0;
      }
    }
  }
}
