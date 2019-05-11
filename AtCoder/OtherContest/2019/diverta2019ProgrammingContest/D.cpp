#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n;
  cin >> n;

  LL ans = 0;
  for (LL i = 1; i * i <= n; i ++) {
    if ((n - i) % i == 0 && (n - i) / i > i) ans += (n - i) / i;
  }

  cout << ans << endl;
}