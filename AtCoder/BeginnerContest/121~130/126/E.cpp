#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

static const int MAX = 100010;
vector<int> G[MAX];

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i ++) {
    int a, b, c;
    cin >> a >> b >> c;
    a --, b --;
    G[a].push_back(b);
  }
  int ans = n;
  for (int i = 0; i < n; i ++) {
    int t = G[i].size();
    while (!G[i].empty()) {
      int j = G[i].back();
      G[i].pop_back();
      t += G[j].size();
      G[j].clear();
    }
    ans -= t - 1;
  }
  cout << ans << endl;
}