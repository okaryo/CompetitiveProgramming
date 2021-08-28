#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  if (k > (n - 1) * (n - 2) / 2) {
    cout << -1 << endl;
    return 0;
  }

  vector<vector<int>> g(n, vector<int>(n, 1));
  int cnt = 0;
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < n - 1; j ++) {
      if (i >= j) continue;
      if (cnt == k) break;
      g[i][j] = 0;
      cnt ++;
    }
    if (cnt == k) break;
  }

  cout << (n - 1) * n / 2 - k << endl;
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < n; j ++) {
      if (i >= j) continue;
      if (g[i][j] == 0) continue;
      cout << i + 1 << " " << j + 1 << endl;
    }
  }
}