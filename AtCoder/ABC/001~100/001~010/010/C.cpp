#include <bits/stdc++.h>
using namespace std;

int main() {
  double x1, y1, x2, y2, T, V, n;
  cin >> x1 >> y1 >> x2 >> y2 >> T >> V >> n;

  int tv = T * V;
  string ans = "NO";
  for (int i = 0; i < n; i ++) {
    double a, b; cin >> a >> b;
    double d1 = sqrt((a - x1)*(a - x1) + (b - y1)*(b - y1));
    double d2 = sqrt((x2 - a)*(x2 - a) + (y2 - b)*(y2 - b));
    if (d1 + d2 <= tv) ans = "YES";
  }

  cout << ans << endl;
}
