#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int n, m;
int ans;
vector<int> p;
vector<vector<int>> graph;

int find_root(int x) {
  if (p[x] != x) p[x] = find_root(p[x]);
  return p[x];
}

void unite(int x, int y) {
  int nx = find_root(x);
  int ny = find_root(y);
  if (nx == ny) return;
  else {
    if (nx > ny) p[nx] = ny;
    else p[ny] = nx;
    ans --;
  }
}

int main() {
  cin >> n >> m;
  ans = n;
  p = vector<int>(n);
  graph = vector<vector<int>>(n);
  for (int i = 0; i < n; i ++) p[i] = i;
  for (int i = 0; i < m; i ++) {
    int x, y;
    cin >> x >> y;
    x --, y --;
    unite(x, y);
    graph[x].push_back(y);
    graph[y].push_back(x);
  }

  vector<bool> check(n, false);
  for (int i = 0; i < n; i ++) {
    int x = find_root(i);
    if (!check[x]) {
      bool flag = false;
      queue<pair<int, int>> q;
      q.push(make_pair(x, x));
      while (!q.empty()) {
        pair<int, int> u = q.front();
        q.pop();
        check[u.first] = true;
        for (int i = 0; i < graph[u.first].size(); i ++) {
          if (!check[graph[u.first][i]]) q.push(make_pair(graph[u.first][i], u.first));
          else if (check[graph[u.first][i]] && graph[u.first][i] != u.second) flag = true;
        }
      }
      if (flag) ans --;
    }
  }

  cout << ans << endl;
}