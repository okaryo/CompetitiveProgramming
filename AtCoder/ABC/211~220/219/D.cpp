#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for(int i = (s); i < int(n); i++)
#define all(x) (x).begin(),(x).end()

const int INF = 310;

int main() {
  ll n;
  cin >> n;
  ll x,y;
  cin >> x >> y;
  vector<ll> a(n);
  vector<ll> b(n);
  rep(i, n) cin >> a[i] >> b[i];
  ll dp[310][310][310];
  rep(i, 310) rep(j, 310) rep(k, 310) dp[i][j][k] = INF;
  dp[0][0][0] = 0;
  rep(i, n) rep(j, 310) rep(k, 310) {
    dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
    dp[i+1][min(j+a[i], x)][min(k+b[i], y)] = min(dp[i][j][k] + 1, dp[i+1][min(j+a[i], x)][min(k+b[i], y)]);
  }
  ll ans = dp[n][x][y];
  if (ans == INF) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
}
