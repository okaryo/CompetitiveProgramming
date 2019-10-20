#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<LL> primeF(n + 1);
  for (LL i = 2; i <= n; i ++) {
    LL tmp = i;
    for (LL j = 2; j <= i; j ++) {
      while (tmp % j == 0 && tmp > 0) {
        primeF.at(j) ++;
        tmp /= j;
      }
    }
  }

  LL ans = 1;
  for (LL i = 0; i <= n; i ++) {
    if (primeF.at(i) != 0) {
      ans *= primeF.at(i) + 1;
      ans %= 1000000007;
    }
  }

  cout << ans << endl;
}
