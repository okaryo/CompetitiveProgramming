#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, a, b;
  cin >> n >> a >> b;
  vector<LL> x(n);
  for (int i = 0; i < n; i ++) cin >> x[i];

  LL ans = 0;
  for (int i = 1; i < n; i ++) {
    ans += min(b, (x[i] - x[i - 1]) * a);
  }

  cout << ans << endl;
}