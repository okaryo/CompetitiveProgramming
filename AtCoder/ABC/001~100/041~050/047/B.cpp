#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  vector<int> x(n);
  vector<int> y(n);
  vector<int> z(n);
  for (int i = 0; i < n; i ++) {
    cin >> x.at(i) >> y.at(i) >> z.at(i);
  }

  int a = 0, b = w, c = 0, d = h;
  for (int i = 0; i < n; i ++) {
    if (z.at(i) == 1) {
      a = max(a, x.at(i));
    } else if (z.at(i) == 2) {
      b = min(b, x.at(i));
    } else if (z.at(i) == 3) {
      c = max(c, y.at(i));
    } else {
      d = min(d, y.at(i));
    }
  }

  if (b - a > 0 && d - c > 0) {
    cout << (b - a) * (d - c) << endl;
  } else {
    cout << 0 << endl;
  }
}
