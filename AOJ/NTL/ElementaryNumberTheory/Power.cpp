#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL power(LL x, LL n, LL m) {
  LL res = 1;
  if (n > 0) {
    res = power(x, n/2, m);
    if (n % 2 == 0) res = (res * res) % m;
    else res = (((res * res) % m) * x) % m;
  }
  return res;
}

int main() {
  int m, n;
  cin >> m >> n;

  cout << power(m, n, 1000000007) << endl;
}
