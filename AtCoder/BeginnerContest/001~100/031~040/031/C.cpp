#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  vector<vector<int>> evenSum(n, vector<int>(n));
  vector<vector<int>>  oddSum(n, vector<int>(n));
  for (int i = 0; i < n-1; i ++) {
    for (int j = i+1; j < n; j ++) {
      for (int k = i+1; k <= j; k += 2) {
        evenSum[i][j] += a[k];
      }
      for (int k = i; k <= j; k += 2) {
        oddSum[i][j] += a[k];
      }
    }
  }

  int tmp, maxAoki, maxTaka = -2500;
  int x, y;
  for (int i = 0; i < n; i ++) {
    maxAoki = -2500;
    for (int j = n-1; j >= 0; j --) {
      if (i == j) continue;

      if (i < j) x = i, y = j;
      else x = j, y = i;
      if (evenSum[x][y] >= maxAoki) {
        tmp = oddSum[x][y];
        maxAoki = evenSum[x][y];
      }
    }
    maxTaka = max(maxTaka, tmp);
  }

  cout << maxTaka << endl;
}
