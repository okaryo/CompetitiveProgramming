#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int h, w;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
vector<string> vs;

int bfs(int x, int y) {
  vector<vector<int>> check(h, vector<int>(w, -1));
  check[x][y] = 0;
  int res = 0;

  queue<int> qx;
  queue<int> qy;
  qx.push(x);
  qy.push(y);
  while(!qx.empty()) {
    int tx = qx.front();
    int ty = qy.front();
    qx.pop(), qy.pop();

    for (int i = 0; i < 4; i ++) {
      int nx = tx + dx[i];
      int ny = ty + dy[i];

      if (nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
      if (check[nx][ny] != -1) continue;
      if (vs[nx][ny] == '#') continue;

      check[nx][ny] = check[tx][ty] + 1;
      res = max(res, check[nx][ny]);
      qx.push(nx);
      qy.push(ny);
    }
  }

  return res;
}

int main() {
  cin >> h >> w;
  vs.resize(h);
  rep(i, h) cin >> vs[i];

  int ans = 0;
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      if (vs[i][j] == '#') continue;
      ans = max(ans, bfs(i, j));
    }
  }

  cout << ans << endl;
}
