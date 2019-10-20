#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int>> d(n, vector<int>(n));
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < n; j ++) cin >> d[i][j];
  }

  vector<vector<int>> sum(n + 1, vector<int>(n + 1));
  for (int i = 1; i <= n; i ++) {
    for (int j = 1; j <= n; j ++) {
      sum[i][j] = d[i - 1][j - 1]  + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
    }
  }

  vector<int> maxv(n * n + 1, 0);
  for (int i1 = 0; i1 < n; i1 ++) {
    for (int i2 = i1 + 1; i2 <= n; i2 ++) {
      for (int j1 = 0; j1 < n; j1 ++) {
        for (int j2 = j1 + 1; j2 <= n; j2 ++) {
          int area = (i2 - i1) * (j2 - j1);
          int t = sum[i2][j2] - sum[i2][j1] - sum[i1][j2] + sum[i1][j1];
          maxv[area] = max(maxv[area], t);
        }
      }
    }
  }

  for (int i = 1; i <= n * n; i ++) {
    maxv[i] = max(maxv[i], maxv[i - 1]);
  }

  int q; cin >> q;
  for (int i = 0; i < q; i ++) {
    int p; cin >> p;
    cout << maxv[p] << endl;
  }
}