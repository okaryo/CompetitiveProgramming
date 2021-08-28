#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> g(h, vector<char>(w));
  vector<vector<int>> d(h, vector<int>(w, -1));
  queue<pair<int, int>> Q;
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      cin >> g[i][j];
      if (g[i][j] == '#') {
        d[i][j] = 0;
        Q.push(make_pair(i, j));
      }
    }
  }

  int ans = 0;
  int dx[4] = {1, -1, 0, 0};
  int dy[4] = {0, 0, 1, -1};
  pair<int, int> p;
  while (!Q.empty()) {
    p = Q.front(); Q.pop();
    int x = p.first;
    int y = p.second;
    ans = d[x][y];
    for (int i = 0; i < 4; i ++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx >= 0 && nx < h && ny >= 0 && ny < w && d[nx][ny] == -1) {
        d[nx][ny] = d[x][y] + 1;
        Q.push(make_pair(nx, ny));
      }
    }
  }

  cout << ans << endl;
}
