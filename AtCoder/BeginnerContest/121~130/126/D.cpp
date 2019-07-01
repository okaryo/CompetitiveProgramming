#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

vector<vector<pair<int, int>>> graph; //pair<to, cost>
vector<int> color;
vector<LL> length;
vector<bool> check;

void dfs(int from) {
  if (check[from]) return;
  check[from] = true;
  for (int i = 0; i < graph[from].size(); i ++) {
    int to   = graph[from][i].first;
    if (check[to]) continue;

    int cost = graph[from][i].second;
    length[to] = length[from] + cost;
    if (length[to] % 2 == 0) color[to] = 0;
    else color[to] = 1;
    dfs(to);
  }
}

int main() {
  int n; cin >> n;
  graph = vector<vector<pair<int, int>>>(n);
  for (int i = 0; i < n - 1; i ++) {
    int x, y, z;
    cin >> x >> y >> z;
    x --, y --;
    graph[x].push_back(make_pair(y, z));
    graph[y].push_back(make_pair(x, z));
  }

  color = vector<int>(n);
  length = vector<LL>(n);
  check = vector<bool>(n, false);
  color[0] = 0, length[0] = 0;
  dfs(0);

  for (int i = 0; i < n; i ++) cout << color[i] << endl;
}
