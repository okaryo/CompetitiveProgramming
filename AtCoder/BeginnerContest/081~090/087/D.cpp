#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL n, m;
vector<vector<pair<LL, LL>>> graph;
vector<LL> length;
vector<bool> check;
bool flag = true;

void dfs(int from) {
  check[from] = true;
  for (int i = 0; i < graph[from].size(); i ++) {
    LL to = graph[from][i].first;
    LL distance = graph[from][i].second;
    if (check[to]) {
      if (length[to] != length[from] + distance) flag = false;
    } else {
      length[to] = length[from] + distance;
      dfs(to);
    }
  }
}


int main() {
  cin >> n >> m;
  graph = vector<vector<pair<LL, LL>>>(n);
  length = vector<LL>(n);
  check = vector<bool>(n, false);
  for (int i = 0; i < m; i ++) {
    LL l, r, d;
    cin >> l >> r >> d;
    l --, r --;
    graph[l].push_back(make_pair(r, d));
    graph[r].push_back(make_pair(l, -d));
  }

  for (int i = 0; i < n; i ++) {
    if (!check[i]) dfs(i);
  }

  string ans = "No";
  if (flag) ans = "Yes";
  cout << ans << endl;
}