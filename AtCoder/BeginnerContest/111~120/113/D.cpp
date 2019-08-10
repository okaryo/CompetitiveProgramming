#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

const int mod = 1e9 + 7;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<int>> dp(h+1, vector<int>(w, 0));
  dp[0][0] = 1;
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      for (int bit = 0; bit < (1 << (w-1)); bit ++) {
        bool flag = true;
        for (int k = 0; k < w - 2; k ++) {
          if (((bit >> k) & 1) && ((bit >> k + 1) & 1)) flag = false;
        }
        if (flag) {
          if (j >= 1 && ((bit >> j - 1) & 1)) {
            dp[i + 1][j - 1] += dp[i][j];
            dp[i + 1][j - 1] %= mod;
          } else if (j <= w - 2 && ((bit >> j) & 1)) {
            dp[i + 1][j + 1] += dp[i][j];
            dp[i + 1][j + 1] %= mod;
          } else {
            dp[i + 1][j] += dp[i][j];
            dp[i + 1][j] %= mod;
          }
        }
      }
    }
  }

  cout << dp[h][k - 1] << endl;
}