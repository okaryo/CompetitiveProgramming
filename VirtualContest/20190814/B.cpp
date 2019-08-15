#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int h, w; cin >> h >> w;
  vector<vector<int>> g(10, vector<int>(10));
  rep(i, 10) rep(j, 10) cin >> g[i][j];
  vector<vector<int>> a(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];

  rep(k, 10) rep(i, 10) rep(j, 10) g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
  int ans = 0;
  rep(i, h) rep(j, w) {
    if (a[i][j] != -1) ans += g[a[i][j]][1];
  }
  cout << ans << endl;
}