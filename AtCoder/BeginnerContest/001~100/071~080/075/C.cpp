#include <bits/stdc++.h>
using namespace std;

const int N = 50;
int a[N], b[N];
int g[N][N];
int visited[N];

void dfs(int v) {
  visited[v] = 1;
  for (int vi = 0; vi < N; vi ++) {
    if (g[v][vi] == 0) continue;
    if (visited[vi] == 1) continue;
    dfs(vi);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i ++) {
    cin >> a[i] >> b[i];
    a[i] --, b[i] --;
    g[a[i]][b[i]] = 1, g[b[i]][a[i]] = 1;
  }

  int ans = 0;
  for (int i = 0; i < m; i ++) {
    g[a[i]][b[i]] = 0, g[b[i]][a[i]] = 0;
    for (int i = 0; i < n; i ++) visited[i] = 0;

    dfs(0);
    for (int i = 0; i < n; i ++) {
      if (visited[i] == 0) {
        ans ++;
        break;
      }
    }

    g[a[i]][b[i]] = 1, g[b[i]][a[i]] = 1;
  }

  cout << ans << endl;
}
