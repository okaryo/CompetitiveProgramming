#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int r, c, d;
  cin >> r >> c >> d;
  vector<vector<int>> g(r, vector<int>(c));
  for (int i = 0; i < r; i ++) {
    for (int j = 0; j < c; j ++) cin >> g[i][j];
  }

  int ans = 0;
  for (int i = 0; i < r; i ++) {
    for (int j = 0; j < c; j ++) {
      if (d % 2 != (i + j) % 2) continue;
      if (i + j <= d) ans = max(ans, g[i][j]);
    }
  }

  cout << ans << endl;
}