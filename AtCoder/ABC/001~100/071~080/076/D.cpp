#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<double> t(n + 1, 0), v(n + 2, 0);
  LL sum_time = 0;
  for (int i = 1; i <= n; i ++) {
    cin >> t[i];
    sum_time += t[i];
    t[i] = sum_time;
  }
  for (int i = 1; i <= n; i ++) cin >> v[i];

  vector<double> L(n + 2, 0), R(n + 2, 0);
  for (int i = 1; i <= n; i ++) {
    L[i] = R[i - 1];
    R[i] = t[i];
  }
  L[n + 1] = R[n], R[n + 1] = R[n];
  
  double ans = 0;
  double l = 0.0, r;
  for (double i = 0.5; i <= R[n]; i += 0.5) {
    r = 100;
    for (int j = 0; j <= n + 1; j ++) {
      if (0.0 <= i && i <= L[j]) r = min(r, v[j] + L[j] - i);
      else if (L[j] <= i && i <= R[j]) r = min(r, v[j]);
      else r = min(r, v[j] + i - R[j]);
    }
    ans += (l + r) * 0.25;
    l = r;
  }

  cout << setprecision(15) << ans << endl;
}