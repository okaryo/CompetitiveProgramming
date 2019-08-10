#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const LL mod = 1e9 + 7;
LL dp[2010][2010];

void make_comb() {
  for (int i = 0; i <= 2000; i ++) {
    for (int j = 0; j <= 2000; j ++) dp[i][j] = 0;
  }
  dp[0][0] = 1;
  for (int i = 1; i <= 2000; i ++) {
    for (int j = 0; j <= i; j ++) {
      if (j == 0) dp[i][j] = dp[i - 1][j];
      else if (j == i) dp[i][j] = dp[i - 1][j - 1];
      else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
    }
  }
}

int main() {
  int n, k;
  cin >> n >> k;

  make_comb();

  for (int i = 1; i <= k; i ++) {
    cout << dp[n - k + 1][i] * dp[k - 1][i - 1] % mod << endl;
  }
}