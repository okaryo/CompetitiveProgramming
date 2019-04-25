#include <bits/stdc++.h>
using namespace std;

int main() {
  double l, x, y, s, d;
  cin >> l >> x >> y >> s >> d;

  double ans, i, j;
  if (s < d) {
    i = (d-s) / (x+y);
    j = (s+l-d) / (y-x);
  } else {
    i = (l-s+d) / (x+y);
    j = (s-d) / (y-x);
  }

  if (y <= x) ans = i;
  else ans = min(i, j);

  cout << setprecision(15) << ans << endl;
}
