#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m, d;
  cin >> n >> m >> d;

  double ans;
  if (d == 0) ans = (double)(m - 1) / n;
  else ans = (double)(2 * (n - d) * (m - 1)) / n / n;

  cout << setprecision(15) << ans << endl;
}