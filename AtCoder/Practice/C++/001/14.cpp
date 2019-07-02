#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s; cin >> s;
  int n = s.size();

  vector<vector<int>> dp(n + 1, vector<int>(2, 0)); // 0: '2', 1: '5'
  for (int i = 0; i < n; i ++) {
    if (s[i] == '2') {
      dp[i + 1][1] = 0;
      dp[i + 1][0] = dp[i][1] + 1;
    } else if (s[i] == '5') {
      dp[i + 1][0] = 0;
      dp[i + 1][1] = dp[i][0] + 1;
      if (dp[i][0] == 0) dp[i + 1][1] = 0;
    } else if (s[i] == '?') {
      dp[i + 1][0] = dp[i][1] + 1;
      dp[i + 1][1] = dp[i][0] + 1;
      if (dp[i][0] == 0) dp[i + 1][1] = 0;
    } else {
      dp[i + 1][0] = 0;
      dp[i + 1][1] = 0;
    }
  }

  int ans = 0;
  for (int i = 0; i <= n; i ++) {
    ans = max(ans, dp[i][1]);
  }

  cout << ans << endl;
}