#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> c(n);
  vector<vector<int>> a(n, vector<int>(m));
  rep(i, n) {
    cin >> c[i];
    rep(j, m) {
      cin >> a[i][j];
    }
  }

  LL sum = 1e9;
  for (int bits = 0; bits < (1 << n); bits ++) {
    LL t = 0;
    vector<int> check(m);
    for (int i = 0; i < n; i ++) {
      if (bits & (1 << i)) {
        t += c[i];
        for (int j = 0; j < m; j ++) {
          check[j] += a[i][j];
        }
      }
    }

    bool ok = true;
    for (int i = 0; i < m; i ++) {
      if (check[i] < x) {
        ok = false;
        break;
      }
    }
    if (ok) sum = min(sum, t);
  }

  if (sum == 1e9) sum = -1;
  cout << sum << endl;
}
