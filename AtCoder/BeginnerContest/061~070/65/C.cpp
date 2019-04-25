#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;
  LL div = 1000000007;

  if (abs(n - m) > 1) {
    cout << 0 << endl;
    return 0;
  } else {
    LL facN = 1, facM = 1;
    for (int i = 2; i <= n; i ++) {
      facN *= i;
      facN %= div;
    }
    for (int i = 2; i <= m; i ++) {
      facM *= i;
      facM %= div;
    }

    if (n == m) {
      cout << (facN * facM * 2) % div << endl;
      return 0;
    } else {
      cout << (facN * facM) % div << endl;
      return 0;
    }
  }
}
