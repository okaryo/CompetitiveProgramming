#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i ++) cin >> v[i];

  int ans = -5 * 1e8;
  for (int a = 0; a <= min(n, k); a ++) {
    for (int b = 0; a + b <= min(n, k); b ++) {
      vector<int> d;
      int tmp = 0;
      for (int c = 0; c < n; c ++) {
        if (c < a || c > n - b - 1) {
          tmp += v[c];
          if (v[c] < 0) d.push_back(v[c]);
        }
      }
      sort(d.begin(), d.end());
      for (int x = 0; x < min(k - (a + b), (int)d.size()); x ++) tmp -= d[x];
      ans = max(ans, tmp);
    }
  }

  cout << ans << endl;
}
