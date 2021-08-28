#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const int mod = 1e9 + 7;

LL RS(LL n, LL p) {
  if (p == 0) return 1;
  else if (p % 2 == 0) {
    LL t = RS(n, p / 2);
    return t * t % mod;
  } else {
    return n * RS(n, p - 1) % mod;
  }
}

int nck(int n, int k) {
  LL top = 1;
  LL sum = 1;
  for (int i = 0; i < k; i ++) {
    top *= (n - i);
    top %= mod;

    sum *= (i + 1);
    sum %= mod;
  }

  return top * RS(sum, mod - 2) % mod;
}

int main() {
  int x, y;
  cin >> x >> y;

  if ((2 * x - y) % 3 != 0 || (2 * y - x) % 3 != 0) {
    cout << 0 << endl;
    return 0;
  }

  int a = (2 * x - y) / 3;
  int b = (2 * y - x) / 3;
  if (a < 0 || b < 0) {
    cout << 0 << endl;
  } else {
    cout << nck(a + b, a) << endl;
  }
}
