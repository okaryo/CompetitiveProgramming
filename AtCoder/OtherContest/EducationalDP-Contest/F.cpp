#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int dp[3010][3010] = {0};

int main() {
  string s, t;
  cin >> s >> t;
  int n = s.size(), m = t.size();
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
      }
      dp[i + 1][j + 1] = max(dp[i + 1][j + 1], max(dp[i + 1][j], dp[i][j + 1]));
    }
  }

  string ans = "";
  int i = n, j = m;
  while (i > 0 && j > 0) {
    if (dp[i][j] == dp[i - 1][j]) {
      i --;
    } else if (dp[i][j] == dp[i][j - 1]) {
      j --;
    } else {
      ans = s[i - 1] + ans;
      i --, j --;
    }
  }
  cout << ans << endl;
}