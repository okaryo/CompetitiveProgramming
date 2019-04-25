#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int dp[101][4][4][4];
int mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;

  dp[0][3][3][3] = 1;
  for (int s = 0; s < n; s ++) {
    for (int c1 = 0; c1 < 4; c1 ++) {
      for (int c2 = 0; c2 < 4; c2 ++) {
        for (int c3 = 0; c3 < 4; c3 ++) {
          if (dp[s][c1][c2][c3] == 0) continue;

          for (int c0 = 0; c0 < 4; c0 ++) {
            if (c0 == 2 && c1 == 1 && c2 == 0) continue;
            if (c0 == 2 && c1 == 0 && c2 == 1) continue;
            if (c0 == 1 && c1 == 2 && c2 == 0) continue;
            if (c0 == 2 && c1 == 1 && c3 == 0) continue;
            if (c0 == 2 && c2 == 1 && c3 == 0) continue;
            
            dp[s + 1][c0][c1][c2] += dp[s][c1][c2][c3];
            dp[s + 1][c0][c1][c2] %= mod;
          }
        }
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < 4; i ++) {
    for (int j = 0; j < 4; j ++) {
      for (int k = 0; k < 4; k ++) {
        ans += dp[n][i][j][k];
        ans %= mod;
      }
    }
  }

  cout << ans << endl;
}
