#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int n, m;
vector<vector<pair<LL, LL>>> graph;

int main() {
  cin >> n >> m;
  graph = vector<vector<pair<LL, LL>>>(n);
  for (int i = 0; i < m; i ++) {
    LL a, b, c;
    cin >> a >> b >> c;
    a --, b --;
    graph[a].push_back(make_pair(b, c));
  }
}