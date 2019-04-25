#include <bits/stdc++.h>
using namespace std;

const int N = 8;
int n, m;
bool g[N][N];

int dfs(int v, int n, bool visited[]) {
  bool all_visited = true;
  for (int i = 0; i < n; i ++) {
    if (visited[i] == false) all_visited = false;
  }

  if (all_visited) return 1;

  int res = 0;
  for (int i = 0; i < n; i ++) {
    if (visited[i]) continue;
    if (g[v][i] == false) continue;

    visited[i] = true;
    res += dfs(i, n, visited);
    visited[i] = false;
  }

  return res;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i ++) {
    int x, y;
    cin >> x >> y;
    x --, y --;
    g[x][y] = g[y][x] = true;
  }

  bool visited[N];
  for (int i = 0; i < N; i ++) visited[i] = false;
  visited[0] = true;

  cout << dfs(0, n, visited) << endl;
}
