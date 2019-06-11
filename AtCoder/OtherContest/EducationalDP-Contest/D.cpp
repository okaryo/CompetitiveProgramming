#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL v[110], w[110];
LL dp[110][100010] = {};

int main() {
  int N, W;
  cin >> N >> W;
  for (int i = 0; i < N; i ++) cin >> w[i] >> v[i];
  
  for (int i = 0; i < N; i ++) {
    for (int j = 0; j <= W; j ++) {
      if (j - w[i] >= 0) {
        dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << dp[N][W] << endl;
}
