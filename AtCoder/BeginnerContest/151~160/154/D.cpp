#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k;
  cin >> n >> k;
  vector<double> p(n);
  rep(i, n) cin >> p[i];

  vector<double> sum(n);
  sum[0] = (p[0] + 1) / 2;
  for (int i = 1; i < n; i ++) {
    sum[i] = sum[i - 1] + (p[i] + 1) / 2;
  }

  double ans = sum[k - 1];
  for (int i = k; i < n; i ++) {
    ans = max(ans, sum[i] - sum[i - k]);
  }

  cout << setprecision(15) << ans << endl;
}
