#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;
  pair<LL, LL> p[n];
  for (int i = 0; i < n; i ++) cin >> p[i].first >> p[i].second;

  sort(p, p+n);
  LL ans = 0;
  int i = 0;
  while (m > 0) {
    if (m >= p[i].second) {
      ans += p[i].first * p[i].second;
      m -= p[i].second;
    } else {
      ans += m * p[i].first;
      m -= p[i].second;
    }
    i ++;
  }

  cout << ans << endl;
}
