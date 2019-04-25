#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, h, a, b, c, d, e;
  cin >> n >> h >> a >> b >> c >> d >> e;

  LL ans = LLONG_MAX;
  LL Y, tmp;
  for (LL X = 0; X <= n; X ++) {
    Y = max(LL(0), LL((double)(n*e - X*e - h - b*X) / (d+e) + 1));

    ans = min(ans, a*X + c*Y);
  }

  cout << ans << endl;
}
