#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> x(n), y(n);
  vector<LL> nx(n), ny(n);
  rep(i, n) {
    cin >> x[i] >> y[i];
    nx[i] = x[i], ny[i] = y[i];
  }
  sort(all(nx));
  sort(all(ny));

  LL ans = (nx.back() - nx.front()) * (ny.back() - ny.front());
  rep(lx, n) for (int rx = lx + 1; rx < n; rx ++) rep(dy, n) for (int uy = dy + 1; uy < n; uy ++) {
    LL left = nx[lx], right = nx[rx];
    LL up = ny[uy], down = ny[dy];
    int num = 0;
    rep(i, n) {
      if (left <= x[i] && x[i] <= right && down <= y[i] && y[i] <= up) num ++;
    }
    if (k <= num) {
      ans = min(ans, (right - left) * (up - down));
    }
  }
  cout << ans << endl;
}