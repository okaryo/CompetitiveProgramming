#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  double ans = 0;
  for (int i = 0; i < n; i ++) {
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    double tmp = a + b + c + d + e * 11 / 90;
    ans = max(ans, tmp);
  }

  cout << setprecision(10) << ans << endl;
}
