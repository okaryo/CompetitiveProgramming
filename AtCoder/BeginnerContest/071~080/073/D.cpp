#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m, r;
  cin >> n >> m >> r;
  vector<int> route(r);
  for (int i = 0; i < r; i ++) cin >> route[i], route[i] --;

  vector<vector<int>> d(n, vector<int>(n, 1e9));
  for (int i = 0; i < m; i ++) {
    int a, b, c;
    cin >> a >> b >> c;
    a --, b --;
    d[a][b] = d[b][a] = c;
  }

  for (int k = 0; k < n; k ++) {
    for (int i = 0; i < n; i ++) {
      for (int j = 0; j < n; j ++) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }

  int ans = 1e9;
  sort(route.begin(), route.end());
  do {
    int tmp = 0;
    for (int i = 1; i < r; i ++) tmp += d[route[i - 1]][route[i]];
    ans = min(ans, tmp);
  } while (next_permutation(route.begin(), route.end()));

  cout << ans << endl;
}