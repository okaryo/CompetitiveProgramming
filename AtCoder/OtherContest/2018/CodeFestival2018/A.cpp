#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, a, b, c, d;
  cin >> t >> a >> b >> c >> d;

  int x = a + c;
  int y = b + d;
  if (t >= x) {
    cout << y << endl;
  } else if (t >= c) {
    cout << d << endl;
  } else if (t >= a) {
    cout << b << endl;
  } else {
    cout << 0 << endl;
  }
}
