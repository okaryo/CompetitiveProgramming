#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> a(h, vector<char>(w));
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      cin >> a[i][j];
    }
  }

  int dx[4] = {1, -1, 0, 0};
  int dy[4] = {0, 0, 1, -1};
  string ans = "Yes";
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      if (a[i][j] != '#') continue;

      int flag = 0;
      for (int k = 0; k < 4; k ++) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (ni >= 0 && nj >= 0 && ni < h && nj < w && a[ni][nj] == '#') flag = 1;
      }
      if (!flag) ans = "No";
    }
  }

  cout << ans << endl;
}
