#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int h, w;
vector<vector<char>> graph;
vector<vector<int>> length;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs() {
  queue<pair<int, int>> q;
  q.push(make_pair(0, 0));
  while (!q.empty()) {
    pair<int, int> u;
    u = q.front(); q.pop();
    int x = u.first;
    int y = u.second;
    for (int i = 0; i < 4; i ++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx >= 0 && nx < h && ny >= 0 && ny < w && graph[nx][ny] == '.' && length[nx][ny] == 0) {
        length[nx][ny] = length[x][y] + 1;
        q.push(make_pair(nx, ny));
      }
    }
  }
}

int main() {
  cin >> h >> w;
  int cnt_black = 0;
  graph = vector<vector<char>>(h, vector<char>(w));
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      cin >> graph[i][j];
      if (graph[i][j] == '#') cnt_black ++;
    }
  }

  length = vector<vector<int>>(h, vector<int>(w, 0));
  length[0][0] = 1;
  bfs();

  int ans;
  if (length[h - 1][w - 1] == 0) ans = -1;
  else ans = h * w - length[h - 1][w - 1] - cnt_black;

  cout << ans << endl;
}