#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const int mod = 1e9 + 7;

LL RS(LL n, LL p, LL mod) {
  if (p == 0) return 1;
  else if (p % 2 == 0) {
    LL t = RS(n, p / 2, mod);
    return t * t % mod;
  } else {
    return n * RS(n, p - 1, mod) % mod;
  }
}

LL comb(LL x, LL y) {
  LL res = 1;
  for (int i = x; i >= x - y + 1; i --) {
    res *= i;
    res %= mod;
  }
  LL t = 1;
  for (int i = y; i > 0; i --) {
    t *= i;
    t %= mod;
  }
  t = RS(t, mod - 2, mod);

  return (res * t) % mod;
}

int main() {
  LL n, m;
  cin >> n >> m;

  map<LL, LL> mp;
  int t = m, i = 2;
  while (t > 1) {
    if (t % i == 0) {
      mp[i] ++;
      t /= i;
    } else {
      i ++;
    }
  }

  LL ans = 1;
  for (auto x : mp) {
    ans *= comb(x.second  + n - 1, x.second);
    ans %= mod;
  }

  cout << ans << endl;
}