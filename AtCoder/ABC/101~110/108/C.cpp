#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, k;
  cin >> n >> k;

  LL ans, x, y;
  if (k % 2 == 1) {
    x = n / k;
    ans = x * x * x;
  } else {
    x = n / k;
    y = (n + k / 2) / k;
    ans = x * x * x + y * y * y;
  }

  cout << ans << endl;
}
