#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;
  vector<LL> a[n];
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < 3; j ++) {
      LL t; cin >> t;
      a[i].push_back(t);
    }
  }

  LL ans = 0;
  for (int bit = 0; bit < (1 << 3); bit ++) {
    vector<LL> b;
    for (int i = 0; i < n; i ++) {
      LL t = 0;
      for (int j = 0; j < 3; j ++) {
        if (bit & (1 << j)) t += a[i][j];
        else t -= a[i][j];
      }
      b.push_back(t);
    }

    LL sum = 0;
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < m; i ++) sum += b[i];
    ans = max(ans, sum);
  }

  cout << ans << endl;
}