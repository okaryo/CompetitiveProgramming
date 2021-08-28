#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int h, w; cin >> h >> w;
  vector<vector<int>> a(10, vector<int>(10));
  for (int i = 0; i < 10; i ++) {
    for (int j = 0; j < 10; j ++) cin >> a[i][j];
  }
  vector<vector<int>> g(h, vector<int>(w));
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) cin >> g[i][j];
  }
  
  for (int k = 0; k < 10; k ++) {
    for (int i = 0; i < 10; i ++) {
      for (int j = 0; j < 10; j ++) {
        a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
      }
    }
  }
  
  int sum = 0;
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      if (g[i][j] == -1 || g[i][j] == 1) continue;
      sum += a[g[i][j]][1];
    }
  }

  cout << sum << endl;
}