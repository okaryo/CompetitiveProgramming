#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

LL digit(LL x) {
  int res = 0;
  while (x) {
    res ++;
    x /= 10;
  }
  return res;
}

int main() {
  LL a, b, x;
  cin >> a >> b >> x;

  LL ans = 0;
  LL left = 1, right = 1e9, middle;
  while (left < right) {
    middle = (left + right) / 2;
    LL t = a * middle + b * digit(middle);
    if (x >= t) {
      ans = max(ans, middle);
      left = middle + 1;
    } else {
      right = middle;
    }
  }

  cout << ans << endl;
}