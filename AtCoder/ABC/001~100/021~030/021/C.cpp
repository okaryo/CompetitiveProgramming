#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

const int mod = 1e9 + 7;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  a --, b --;

  int m;
  cin >> m;
  vector<vector<int>> g(n, vector<int>(n, 0));
  for (int i = 0; i < m; i ++) {
    int x, y;
    cin >> x >> y;
    x --, y --;
    g[x][y] = g[y][x] = 1;
  }

  vector<vector<int>> dp(n, vector<int>(n));
  dp[0][a] = 1;
  for (int cnt = 1; cnt < n; cnt ++) {
    for (int i = 0; i < n; i ++) {
      for (int j = 0; j < n; j ++) {
        if (g[j][i]) {
          dp[cnt][i] = (dp[cnt - 1][j] + dp[cnt][i]) % mod;
        }
      }
    }
  }

  for (int i = 0; i < n; i ++) {
    if (dp[i][b] > 0) {
      cout << dp[i][b] << endl;
      break;
    }
  }
}