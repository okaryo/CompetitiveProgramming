#include <bits/stdc++.h>
using namespace std;

int main() {
  int R, C, sy, sx, gy, gx;
  cin >> R >> C >> sy >> sx >> gy >> gx;
  sy --, sx --, gy --, gx --;
  vector<vector<char>> area(R, vector<char>(C));
  for (int i = 0; i < R; i ++) {
    for (int j = 0; j < C; j ++) {
      cin >> area[i][j];
    }
  }

  vector<vector<int>> d(R, vector<int>(C, -1));
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  queue<int> qy;
  queue<int> qx;
  qy.push(sy), qx.push(sx);
  d[sy][sx] = 0;

  while (!qy.empty() && !qx.empty()) {
    int py = qy.front();
    int px = qx.front();
    qy.pop(), qx.pop();

    if (py == gy && px == gx) break;

    for (int i = 0; i < 4; i ++) {
      int ny = py + dy[i];
      int nx = px + dx[i];
      if (area[ny][nx] == '.' && d[ny][nx] == -1) {
        qy.push(ny), qx.push(nx);
        d[ny][nx] = d[py][px] + 1;
      }
    }
  }

  cout << d[gy][gx] << endl;
}
