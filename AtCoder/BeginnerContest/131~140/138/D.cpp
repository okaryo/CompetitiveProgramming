#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

vector<vector<LL>> graph;
vector<bool> check;
vector<LL> sum;
vector<LL> ans;

void dfs(int x, LL sumv) {
  check[x] = true;
  ans[x] = sumv;
  for (int i = 0; i < graph[x].size(); i ++) {
    int y = graph[x][i];
    if (!check[y]) {
      dfs(y, sumv + sum[y]);
    }
  }
}

int main() {
  LL n, q;
  cin >> n >> q;
  graph = vector<vector<LL>>(n);
  rep(i, n - 1) {
    LL a, b; cin >> a >> b;
    a --, b --;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  check = vector<bool>(n, false);
  sum = vector<LL>(n, 0);
  ans = vector<LL>(n);
  rep(i, q) {
    LL p, x;
    cin >> p >> x;
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