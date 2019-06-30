#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

const LL mod = 1e9 + 7;
LL dp[2010][2010];

int main() {
  int n, k;
  cin >> n >> k;

  for (int i = 0; i <= n; i ++) {
    for (int j = 0; j <= n; j ++) dp[i][j] = 0;
  }
  dp[1][1] = 1, dp[1][2] = 2;
  dp[2][2] = 1, dp[2][3] = 2;
  for (int i = 1; i < n; i ++) {
    for (int j = i; j < n; j ++) {
    }
  }

  
  /*for (int i = 1; i <= n; i ++) {
    cout << dp[i][n] << endl;
  }*/
  cout << dp[1][n] << endl;
}