#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k;
  cin >> n >> k;
  vector<LL> x(n), y(n);
  vector<LL> nx(n), ny(n);
  rep(i, n) {
    cin >> x[i] >> y[i];
    nx[i] = x[i];
    ny[i] = y[i];
  }

  sort(all(nx));
  sort(all(ny));

  LL ans = (nx.back() - nx.front()) * (ny.back() - ny.front());
  for (int xi = 0; xi < n; xi ++) {
    for (int xj = xi + 1; xj < n; xj ++) {
      for (int yi = 0; yi < n; yi ++) {
        for (int yj = yi + 1; yj < n; yj ++) {
          int num = 0;
          LL left = nx[xi], right = nx[xj];
          LL down = ny[yi], up = ny[yj];
          rep(i, n) {
            if (nx[xi] <= x[i] && x[i] <= nx[xj] && ny[yi] <= y[i] && y[i] <= ny[yj]) num ++;
          }
          if (k <= num) {
            ans = min(ans, (right - left) * (up - down));
          }
        }
      }
    }
  }

  cout << ans << endl;
}