#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, p;
  cin >> n >> p;

  LL i = 2, ans = 1;
  while(true) {
    LL tmpi = i;
    LL tmp = pow(i, n);
    if (tmp > p) break;
    if (p % tmp == 0) {
      p /= tmp;
      ans *= i;
      i = tmpi;
      continue;
    }
    i ++;
  }

  cout << ans << endl;
}
