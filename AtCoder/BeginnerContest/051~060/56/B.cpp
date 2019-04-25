#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, a, b;
  cin >> w >> a >> b;

  int x = w + a;
  int y = w + b;
  if (y - a >= 0 && y - a <= 2 * w) {
    cout << 0 << endl;
  } else {
    cout << min(abs(b - x), abs(a - y)) << endl;
  }
}
