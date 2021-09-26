#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for(int i = (s); i < int(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll mod = 998244353;
  vector<vector<ll>> dp(n, vector<ll>(10, 0));
  dp[0][a[0]] = 1;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      ll x = (a[i]+j) % 10;
      ll y = (a[i]*j) % 10;
      dp[i][x] = (dp[i][x] + dp[i-1][j]) % mod;
      dp[i][y] = (dp[i][y] + dp[i-1][j]) % mod;
    }
  }
  for (int i = 0; i < 10; i++) {
    cout << dp[n-1][i] << endl;
  }
}
