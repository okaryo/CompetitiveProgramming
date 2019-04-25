#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL gcd(LL a, LL b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  LL N, M;
  string s, t;
  cin >> N >> M >> s >> t;

  LL gcd_nm = gcd(N, M);
  LL n = N / gcd_nm, m = M / gcd_nm;
  LL ans = gcd_nm * n * m;
  for (LL i = 0; i < gcd_nm; i ++) {
    if (s.at(i * n) != t.at(i * m)) {
      ans = -1;
      break;
    }
  }

  cout << ans << endl;
}
