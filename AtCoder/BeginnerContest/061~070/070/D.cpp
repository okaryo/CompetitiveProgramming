#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

vector<vector<pair<LL, LL>>> tree; // pair<to, cost>
vector<LL> depth;

void dfs(LL v, LL p, LL d) {
  depth[v] = d;
  for (LL i = 0; i < tree[v].size(); i ++) {
    if (tree[v][i].first == p) continue;
    dfs(tree[v][i].first, v, d + tree[v][i].second);
  }
}

int main() {
  int n; cin >> n;
  tree = vector<vector<pair<LL, LL>>>(n);
  depth = vector<LL>(n);
  for (int i = 0; i < n - 1; i ++) {
    LL a, b, c;
    cin >> a >> b >> c;
    a --, b --;
    tree[a].push_back(make_pair(b, c));
    tree[b].push_back(make_pair(a, c));
  }

  LL q, k;
  cin >> q >> k;
  k --;
  dfs(k, -1, 0);
  for (int i = 0; i < q; i ++) {
    LL x, y;
    cin >> x >> y;
    x --, y --;
    cout << depth[x] + depth[y] << endl;
  }
}