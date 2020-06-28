#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m, Q;
  cin >> n >> m >> Q;
  vector<int> l(m + 1), r(m + 1);
  vector<vector<LL>> lr(n + 1, vector<LL>(n + 1, 0));
  for (int i = 1; i <= m; i ++) {
    cin >> l[i] >> r[i];
    lr[l[i]][r[i]] ++;
  }

  vector<vector<LL>> sum(n + 1, vector<LL>(n + 1, 0));
  for (int i = 1; i <= n; i ++) {
    for (int j = 1; j <= n; j ++) {
      sum[i][j] = sum[i][j - 1] + lr[i][j];
    }
  }

  rep(i, Q) {
    int p, q; cin >> p >> q;
    int ans = 0;
    for (int j = p; j <= q; j ++) ans += sum[j][q] - sum[j][p - 1];
    cout << ans << endl;
  }
}