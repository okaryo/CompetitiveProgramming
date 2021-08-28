#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const int mod = 1e9 + 7;

int main() {
  string s; cin >> s;
  int n = s.size();

  LL dp[100005][13];
  rep(i, n + 1) {
    rep(j, 13) dp[i][j] = 0;
  }
  dp[0][0] = 1;
  rep(i, n) {
    int t;
    if (s[i] == '?') t = -1;
    else t = s[i] - '0';

    rep(j, 10) {
      if (t != -1 && t != j) continue;
      rep(k, 13) {
        dp[i + 1][(k * 10 + j) % 13] += dp[i][k];
      }
    }
    rep(j, 13) dp[i + 1][j] %= mod;
  }

  cout << dp[n][5] << endl;
}