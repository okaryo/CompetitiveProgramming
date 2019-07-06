#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int h, w; cin >> h >> w;
  vector<vector<int>> choco(h + 1, vector<int>(w + 1, 0));
  for (int i = 1; i <= h; i ++) {
    for (int j = 1; j <= w; j ++) {
      cin >> choco[i][j];
      if ((i + j) % 2 == 0) choco[i][j] *= -1;
    }
  }

  vector<vector<int>> sum(h + 1, vector<int>(w + 1, 0));
  for (int i = 1; i <= h; i ++) {
    for (int j = 1; j <= w; j ++) {
      sum[i][j] = choco[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
    }
  }

  int ans = 0;
  for (int i = 0; i <= h; i ++) {
    for (int j = 0; j <= w; j ++) {
      for (int ni = i + 1; ni <= h; ni ++) {
        for (int nj = j + 1; nj <= w; nj ++) {
          int t = sum[ni][nj] - sum[ni][j] - sum[i][nj] + sum[i][j];
          if (t == 0) ans = max(ans, (ni - i) * (nj - j));
        }
      }
    }
  }

  cout << ans << endl;
}