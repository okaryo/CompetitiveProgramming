#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<double> x(n), y(n);
  for (int i = 0; i < n; i ++) cin >> x[i] >> y[i];

  double ans = 0;
  double tmp;
  for (int i = 0; i < n-1; i ++) {
    for (int j = i+1; j < n; j ++) {
      tmp = pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2);
      ans = max(ans, sqrt(tmp));
    }
  }

  cout << setprecision(10) << ans << endl;
}
