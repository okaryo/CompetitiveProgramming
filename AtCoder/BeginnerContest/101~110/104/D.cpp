#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

const int mod = 1e9 + 7;

int main() {
  string s;
  cin >> s;
  int  n = s.size();

  LL dp[100010][4] = {};
  dp[n][0] = dp[n][1] = dp[n][2] = 0;
  dp[n][3] = 1;
  for (int i = n - 1; i >= 0; i --) {
    for (int j = 3; j >= 0; j --) {
      if (s[i] == '?') dp[i][j] = dp[i + 1][j] * 3;
      else dp[i][j] = dp[i + 1][j];

      if (j < 3 && (s[i] == '?' || s[i] == "ABC"[j])) dp[i][j] += dp[i + 1][j + 1];
      dp[i][j] %= mod;
    }
  }

  cout << dp[0][0] << endl;
}