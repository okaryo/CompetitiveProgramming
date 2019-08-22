#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

vector<vector<int>> graph;
vector<int> ans;
vector<int> sum;
vector<bool> check;

void dfs(int x, int sumv) {
  ans[x] = sumv;
  check[x] = true;
  for (int i = 0; i < graph[x].size(); i ++) {
    if (!check[graph[x][i]]) dfs(graph[x][i], sumv + sum[graph[x][i]]);
  }
}

int main() {
  int n, q; cin >> n >> q;
  graph = vector<vector<int>>(n);
  rep(i, n - 1) {
    int a, b; cin >> a >> b;
    a --, b --;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  ans = vector<int>(n);
  sum = vector<int>(n);
  check = vector<bool>(n, false);
  rep(i, q) {
    int p, x; cin >> p >> x;
    p --;
    sum[p] += x;
  }
  dfs(0, sum[0]);

  rep(i, n) {
    if (i) cout << " ";
    cout << ans[i];
  }
  cout << endl;
}