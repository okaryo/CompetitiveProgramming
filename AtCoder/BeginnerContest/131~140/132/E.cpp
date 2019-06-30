#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

vector<vector<LL>> graph;

int main() {
  LL n, m;
  cin >> n >> m;
  graph = vector<vector<LL>>(n);
  for (int i = 0; i < m; i ++) {
    LL x, y;
    cin >> x >> y;
    x --, y --;
    graph[x].push_back(y);
  }
}