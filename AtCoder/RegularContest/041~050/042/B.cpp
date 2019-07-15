#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  double X, Y;
  cin >> X >> Y;
  int n; cin >> n;
  vector<int> x(n + 1), y(n + 1);
  for (int i = 0; i < n; i ++) cin >> x[i] >> y[i];
  x[n] = x[0], y[n] = y[0];

  double ans = 10000;
  for (int i = 1; i <= n; i ++) {
    double a = (double)(y[i] - y[i - 1]) / (x[i] - x[i - 1]);
    double b = -1.0;
    double c = y[i] - a * x[i];
    double d = abs(a * X + b * Y + c) / sqrt(a * a + b * b);
    ans = min(ans, d);
  }

  cout << setprecision(15) << ans << endl;
}