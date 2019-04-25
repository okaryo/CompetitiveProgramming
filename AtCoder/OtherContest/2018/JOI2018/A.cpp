#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int x = a * 7 + b;
  int y = c / x;
  int z = (c % x + a - 1) / a;
  if (z >= 8) z = 7;
  int ans = 7 * y + z;

  cout << ans << endl;
}
