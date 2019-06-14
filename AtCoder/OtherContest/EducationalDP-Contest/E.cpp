#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

const LL INF = 1e10;

int main() {
  int N, W;
  cin >> N >> W;
  LL w[110], v[110];
  for (int i = 0; i < N; i ++) cin >> w[i] >> v[i];

  LL dp[110][100010];
  for (int i = 0 ;i < 110; i ++) {
    for (int j = 0; j < 100010; j ++) dp[i][j] = INF;
  }

  dp[0][0] = 0;
  for (int i = 0; i < N; i ++) {
    for (int j = 0; j <= 100000; j ++) {
      if (j - v[i] >= 0) {
        dp[i + 1][j] = min(dp[i][j], dp[i][j - v[i]] + w[i]);
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }

  LL ans = 0;
  for (int i = 0; i < 100010; i ++) {
    if (dp[N][i] <= W) ans = i;
  }
  cout << ans << endl;
}