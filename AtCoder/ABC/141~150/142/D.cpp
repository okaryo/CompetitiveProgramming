#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

LL gcd(LL a, LL b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  LL a, b; cin >> a >> b;

  LL x = gcd(a, b);
  LL res = 1;
  for (LL i = 2; i * i <= x; i ++) {
    if (x % i == 0) {
      res ++;
      while (x % i == 0) {
        x /= i;
      }
    }
  }
  if (x > 1) res ++;

  cout << res << endl;
}