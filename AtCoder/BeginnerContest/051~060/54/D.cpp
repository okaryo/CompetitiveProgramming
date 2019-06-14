#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

const int INF = 100000;
int dp[50][410][410];

int main() {
  int n, ma, mb;
  cin >> n >> ma >> mb;
  vector<int> a(n), b(n), c(n);
  for (int i = 0; i < n; i ++) cin >> a[i] >> b[i] >> c[i];

  for (int i = 0; i <= n; i ++) {
    for (int j = 0; j < 410; j ++) {
      for (int k = 0; k < 410; k ++) dp[i][j][k] = INF;
    }
  }

  dp[0][0][0] = 0;
  for (int i = 0; i < n; i ++) {
    for (int na = 0; na <= 400; na ++) {
      for (int nb = 0; nb <= 400; nb ++) {
        if (dp[i][na][nb] == INF) continue;
        dp[i + 1][na][nb] = min(dp[i + 1][na][nb], dp[i][na][nb]);
        dp[i + 1][na + a[i]][nb + b[i]] = min(dp[i + 1][na + a[i]][nb + b[i]], dp[i][na][nb] + c[i]);
      }
    }
  }

  int ans = INF;
  for (int na = 1; na <= 400; na ++) {
    for (int nb = 1; nb <= 400; nb ++) {
      if (na * mb == nb * ma) ans = min(ans, dp[n][na][nb]);
    }
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
}