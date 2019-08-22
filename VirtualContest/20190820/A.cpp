#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int h, w; cin >> h >> w;
  vector<string> g(h);
  rep(i, h) cin >> g[i];

  vector<vector<int>> up(h, vector<int>(w, 0));
  rep(i, w) {
    for (int j = 1; j < h; j ++) {
      if (g[j - 1][i] == '.') up[j][i] = up[j - 1][i] + 1;
    }
  }
  vector<vector<int>> down(h, vector<int>(w, 0));
  rep(i, w) {
    for (int j = h - 2; j >= 0; j --) {
      if (g[j + 1][i] == '.') down[j][i] = down[j + 1][i] + 1;
    }
  }
  vector<vector<int>> right(h, vector<int>(w, 0));
  rep(i, h) {
    for (int j = w - 2; j >= 0; j --) {
      if (g[i][j + 1] == '.') right[i][j] = right[i][j + 1] + 1;
    }
  }
  vector<vector<int>> left(h, vector<int>(w, 0));
  rep(i, h) {
    for (int j = 1; j < w; j ++) {
      if (g[i][j - 1] == '.') left[i][j] = left[i][j - 1] + 1;
    }
  }

  int ans = 0;
  rep(i, h) rep(j, w) {
    if (g[i][j] == '.') {
      int t = up[i][j] + down[i][j] + right[i][j] + left[i][j] + 1;
      ans = max(ans, t);
    }
  }
  cout << ans << endl;
}