#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  double n, k;
  cin >> n >> k;
  double ans = 0;
  for (int i = 1; i <= n; i ++) {
    if (i < k) {
      double t = i;
      double x = (double)1/n;
      while (t < k) {
        t *= 2;
        x *= (double)1/2;
      }
      ans += x;
    } else {
      ans += (double)1/n;
    }
  }
  cout << setprecision(15) << ans << endl;
}
