#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL r, g, b, n;
  cin >> r >> g >> b >> n;

  LL ans = 0;
  for (LL i = 0; i*r <= n; i ++) {
    for (LL j = 0; i*r + j*g <= n; j ++) {
      LL x = n - (r * i + g * j);
      if (x % b == 0) ans ++;
    }
  }

  cout << ans << endl;
}