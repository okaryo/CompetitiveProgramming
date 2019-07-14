#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

vector<vector<pair<LL, bool>>> graph;
vector<vector<LL>> ans;

int main() {
  LL n, m;
  cin >> n >> m;
  graph = vector<vector<pair<LL, bool>>>(n);
  for (int i = 0; i < m; i ++) {
    LL a, b;
    cin >> a >> b;
    a --, b --;
    graph[a].push_back(make_pair(b, false));
    graph[b].push_back(make_pair(a, false));
  }
  if (m % 2 == 1) {
    cout << -1 << endl;
    return 0;
  }



  ans = vector<pair<LL, LL>>(n);
}