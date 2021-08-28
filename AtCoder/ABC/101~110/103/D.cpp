#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  pair<int, int> p[m];
  for (int i = 0; i < m; i ++) {
    cin >> p[i].second >> p[i].first;
  }
  sort(p, p + m);

  int ans = 0;
  int t = -1;
  for (int i = 0; i < m; i ++) {
    if (t >= p[i].second && t < p[i].first) continue;
    else {
      ans ++;
      t = p[i].first - 1;
    }
  }
  cout << ans << endl;
}