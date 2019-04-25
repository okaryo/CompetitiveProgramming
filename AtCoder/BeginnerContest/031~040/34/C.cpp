#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL calc(LL a, LL b, LL p) {
  if (b == 0) return 1;
  if (b % 2 == 0) {
    LL d = calc(a, b/2, p);
    return ((d % p) * (d % p)) % p;
  } else {
    return ((a % p) * (calc(a, b-1, p) % p)) % p;
  }
}

int main() {
  LL w, h;
  LL mod = 1000000007;
  cin >> w >> h;

  w --, h --;
  LL ans = w + h;
  for (int i = w + h - 1; i > h; i --) {
    ans *= i;
    ans %= mod;
  }
  LL t = w;
  for (int i = w - 1; i >= 1; i --) {
    t *= i;
    t %= mod;
  }

  t = calc(t, mod - 2, mod);
  ans = ((ans%mod) * (t % mod)) % mod;

  cout << ans << endl;
}
