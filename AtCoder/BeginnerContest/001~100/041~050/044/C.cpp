#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;
  vector<LL> a(n+1);
  for (int i = 1; i <= n; i ++) cin >> a[i];

  sort(a.begin(), a.end());
  LL x = max(a[n], m);
  LL dp[51][51][2501];
  dp[0][0][0] = 1;
  for (int i = 1; i <= n; i ++) {
    for (int j = 0; j <= n; j ++) {
      for (int k = 0; k <= n*x; k ++) {
        if (k < a[i]) dp[i][j][k] = dp[i-1][j][k];
        else if (j > 0 && k >= a[i]) dp[i][j][k] = dp[i-1][j][k] + dp[i-1][j-1][k-a[i]];
        else dp[i][j][k] = 0;
      }
    }
  }

  LL ans = 0;
  for (int i = 1; i <= n; i ++) {
    ans += dp[n][i][i*m];
  }

  cout << ans << endl;
}
