#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, c; cin >> n >> c;
  vector<vector<int>> d(c, vector<int>(c));
  vector<vector<int>> a(3, vector<int>(c, 0));
  rep(i, c) {
    rep(j, c) cin >> d[i][j];
  }
  rep(i, n) {
    rep(j, n) {
      int t; cin >> t;
      a[(i + j) % 3][t - 1] ++;
    }
  }

  int ans = 1e9;
  rep(i, c) {
    rep(j, c) {
      if (i != j) {
        rep(k, c) {
          if (i != k && j != k) {
            int t = 0;
            rep(l, c) {
              t += d[l][i] * a[0][l];
              t += d[l][j] * a[1][l];
              t += d[l][k] * a[2][l];
            }
            ans = min(ans, t);
          }
        }
      }
    }
  }
  cout << ans << endl;
}