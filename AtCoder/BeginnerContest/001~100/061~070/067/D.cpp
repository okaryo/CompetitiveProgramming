#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int n;
vector<vector<int>> graph;
vector<bool> check;

void dfs(int x, int d, vector<int> &y) {
  check[x] = true;
  y[x] = d;
  for (int i = 0; i < graph[x].size(); i ++) {
    if (!check[graph[x][i]]) dfs(graph[x][i], d + 1, y);
  }
}

int main() {
  cin >> n;
  graph = vector<vector<int>>(n);
  for (int i = 0; i < n - 1; i ++) {
    int a, b; cin >> a >> b;
    a -- ,b --;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  vector<int> from_one(n), from_n(n);
  check = vector<bool>(n, false);
  dfs(0, 0, from_one);
  check = vector<bool>(n, false);
  dfs(n - 1, 0, from_n);

  int sum_from_one = 0, sum_from_n = 0;
  rep(i, n) {
    if (from_one[i] <= from_n[i]) sum_from_one ++;
    else sum_from_n ++;
  }

  if (sum_from_one > sum_from_n) cout << "Fennec" << endl;
  else cout << "Snuke" << endl;
}