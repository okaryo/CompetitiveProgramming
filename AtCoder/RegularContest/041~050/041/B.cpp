#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> g(n, vector<char>(m));
  vector<vector<char>> ans(n, vector<char>(m, '0'));
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) cin >> g[i][j];
  }

  for (int i = 1; i < n - 1; i ++) {
    for (int j = 1; j < m - 1; j ++) {
      char t = g[i - 1][j];
      if (t > '0') {
        ans[i][j] = t;
        g[i][j - 1] = g[i][j - 1] - t + '0';
        g[i][j + 1] = g[i][j + 1] - t + '0';
        g[i + 1][j] = g[i + 1][j] - t + '0';
        g[i - 1][j] = '0';
      }
    }
  }

  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) {
      cout << ans[i][j];
    }
    cout << endl;
  }
}