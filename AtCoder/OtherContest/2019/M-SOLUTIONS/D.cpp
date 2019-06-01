#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int n;

int main() {
  cin >> n;
  vector<int> g[n];
  pair<int, int> p[n];
  for (int i = 0; i < n; i ++) p[i].first = 0;

  for (int i = 0; i < n - 1; i ++) {
    int a, b;
    cin >> a >> b;
    a --, b --;
    g[a].push_back(b);
    g[b].push_back(a);
    p[a].first ++, p[b].first ++;
    p[a].second = a, p[b].second = b;
  }

  vector<int> c(n);
  int sum = 0;
  for (int i = 0; i < n; i ++) {
    cin >> c[i];
    sum += c[i];
  }
  sort(c.begin(), c.end());
  reverse(c.begin(), c.end());
  sum -= c[0];

  sort(p, p + n);
  reverse(p, p + n);

  vector<int> ans(n);
  vector<int> check(n, 0);
  queue<int> q;
  q.push(p[0].second);
  ans[p[0].second] = c[0];
  int u, i = 1;
  while (!q.empty()) {
    u = q.front(); q.pop();
    check[u] = 2;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < g[u].size(); i ++) {
      if (check[g[u][i]] == 2) continue;
      q.push(g[u][i]);
      pq.push(make_pair((int)g[g[u][i]].size(), g[u][i]));
    }

    while (!pq.empty()) {
      pair<int, int> v;
      v = pq.top(); pq.pop();
      if (check[v.second] == 0) {
        ans[v.second] = c[i];
        i ++;
        check[v.second] = 1;
      }
    }
  }

  cout << sum << endl;
  for (int i = 0; i < n; i ++) {
    if (i) cout << " ";
    cout << ans[i] ;
  }
  cout << endl;
}