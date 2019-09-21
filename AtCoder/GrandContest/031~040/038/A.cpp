#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int h, w, a, b;
  cin >> h >> w >> a >> b;
  vector<vector<int>> ans(h + 1, vector<int>(w + 1, 0));

  if (a != 0 && b != 0) {
    if ((w % a != 0) || (h % b != 0)) {
      cout << "No" << endl;
      return 0;
    }
    if (w / a != h / b) {
      cout << "No" << endl;
      return 0;
    }
  }

  for (int i = 1; i <= h; i ++) {
    for (int j = 1; j <= w; j ++) {
      if (a == 0 && b == 0) continue;
      else if (a == 0) {
        if ((i - 1) / b == 0) ans[i][j] = 1;
      } else if (b == 0) {
        if ((j - 1) / a == 0) ans[i][j] = 1;
      } else {
        if ((j - 1) / a == (i - 1) / b) ans[i][j] = 1;
      }
    }
  }

  rep(i, h) {
    rep(j, w) {
      cout << ans[i+1][j+1];
    }
    cout << endl;
  }
}