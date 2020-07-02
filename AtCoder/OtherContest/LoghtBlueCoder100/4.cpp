#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > a(n, vector<int>(m));
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) {
      cin >> a[i][j];
    }
  }

  LL ans = 0;
  LL t = 0;
  for (int i = 0; i < m; i ++) {
    for (int j = i + 1; j < m; j ++) {
      for (int k = 0; k < n; k ++) {
        t += max(a[k][i], a[k][j]);
      }
      ans = max(ans, t);
      t = 0;
    }
  }

  cout << ans << endl;
}
