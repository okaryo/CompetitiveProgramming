#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

LL RS(LL n, LL p, LL mod) {
  if (p == 0) return 1;
  else if (p % 2 == 0) {
    LL t = RS(n, p / 2, mod);
    return t * t % mod;
  } else {
    return n * RS(n, p - 1, mod) % mod;
  }
}

LL nck(LL n, LL k) {
  LL x = 1;
  const LL mod = 1e9 + 7;
  for (LL i = 0; i < k; i ++) {
    x *= (n - i);
    x %= mod;
  }

  LL y = 1;
  for (LL i = 1; i <= k; i ++) {
    y *= i;
    y %= mod;
  }

  return x * RS(y, mod - 2, mod) % mod;
}

int main() {
  LL n, a, b;
  cin >> n >> a >> b;

  const LL mod = 1e9 + 7;

  LL ans = RS(2, n, mod) - 1;
  ans -= (nck(n, a) + nck(n, b)) % mod;
  while (ans < 0) ans += mod;

  cout << ans << endl;
}
