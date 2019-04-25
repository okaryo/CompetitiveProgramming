#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  int x = 0, y = 0;
  int g[h][w];
  for (int i = 0; i < n; i ++) {
    int a; cin >> a;
    for (int j = 0; j < a; j ++) {
      if (x == -1 && y % 2 == 1)y ++, x ++;
      else if (x == w && y % 2 == 0) y ++, x --;

      g[y][x] = i + 1;

      if (y % 2 == 0) x ++;
      else x --;
    }
  }

  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      if (j) cout << " " << g[i][j];
      else cout << g[i][j];
    }
    cout << endl;
  }
}