#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL l, r;
  cin >> l >> r;

  LL ans = 2019;
  for (LL i = l; i <= min(r, l + 2019); i ++) {
    for (LL j = i + 1; j <= min(r, l + 2019); j ++) {
      LL t = (i * j) % 2019;
      ans = min(ans, t);
    }
  }

  cout << ans << endl;
}