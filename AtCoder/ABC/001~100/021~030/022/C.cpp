#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> d(n, vector<int>(n, 1e9));
  for (int i = 0; i < m; i ++) {
    int u, v, l;
    cin >> u >> v >> l;
    u --, v --;
    d[u][v] = d[v][u] = l;
  }
  for (int i = 0; i < n; i ++) d[i][i] = 0;

  for (int k = 1; k < n; k ++) {
    for (int i = 1; i < n; i ++) {
      for (int j = 1; j < n; j ++) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }

  int ans = 1e9;
  for (int i = 1; i < n; i ++) {
    if (d[0][i] == 1e9) continue;
    for (int j = i + 1; j < n; j ++) {
      if (d[0][j] == 1e9) continue;
      if (d[i][j] == 1e9) continue;
      ans = min(ans, d[0][i] + d[i][j] + d[j][0]);
    }
  }

  if (ans == 1e9) cout << -1 << endl;
  else cout << ans << endl;
}