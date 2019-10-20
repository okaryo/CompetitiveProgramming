#include <bits/stdc++.h>
using namespace std;

const int N = 10;
int H, W, T;
char g[N][N];
long long length[N][N], times[N][N];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void init(int mid) {
  for (int i = 0; i < H; i ++) {
    for (int j = 0; j < W; j ++) {
      length[i][j] = -1;
      times[i][j] = 1;
      if (g[i][j] == '#') times[i][j] = mid;
    }
  }
}

int main() {
  cin >> H >> W >> T;

  int sx, sy, gx, gy;
  for (int i = 0; i < H; i ++) {
    for (int j = 0; j < W; j ++) {
      cin >> g[i][j];
      if (g[i][j] == 'S') sx = i, sy = j;
      if (g[i][j] == 'G') gx = i, gy = j;
    }
  }

  long long left = 1, right = T, mid;
  while (left < right - 1) {
    mid = (left + right) / 2;
    init(mid);
    queue<pair<int, int>> q;
    pair<int, int> u;
    q.push(make_pair(sx, sy));
    length[sx][sy] = 0;
    while (!q.empty()) {
      u = q.front();
      q.pop();
      int x = u.first;
      int y = u.second;
      for (int i = 0; i < 4; i ++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < H && ny >= 0 && ny < W) {
          if (length[nx][ny] == -1 || length[nx][ny] > length[x][y] + times[nx][ny]) {
            length[nx][ny] = length[x][y] + times[nx][ny];
            q.push(make_pair(nx, ny));
          }
        }
      }
    }

    if (length[gx][gy] <= T) left = mid;
    else right = mid;
  }

  cout << left << endl;
}