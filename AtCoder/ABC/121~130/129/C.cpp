#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

const int mod = 1e9 + 7;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> dp(n, 0);
  for (int i = 0; i < m; i ++) {
    int t; cin >> t;
    t --;
    dp[t] = -1;
    if (i > 0 && dp[t] == -1 && dp[t - 1] == -1) {
      cout << 0 << endl;
      return 0;
    }
  }
  if (dp[0] == -1) dp[1] = 1;
  else if (dp[1] == -1) dp[0] = 1;
  else dp[0] = 1, dp[1] = 2;

  for (int i = 2; i < n; i ++) {
    if (dp[i] == -1) continue;
    else if (dp[i - 1] == -1) dp[i] = dp[i - 2] % mod;
    else if (dp[i - 2] == -1) dp[i] = dp[i - 1] % mod;
    else dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
  }
  cout << dp[n - 1] << endl;
}