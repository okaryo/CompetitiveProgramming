#include <bits/stdc++.h>
using namespace std;

int main() {
  double xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;

  double sx = xb - xa, sy = yb - ya, tx = xc - xa, ty = yc - ya;
  double ans = abs(sx*ty - sy*tx) / 2;

  cout << setprecision(10) << ans << endl;
}
