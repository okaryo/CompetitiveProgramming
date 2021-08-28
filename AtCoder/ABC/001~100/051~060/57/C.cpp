#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int cnt_digits(LL x) {
  int digits = 0;
  while (x > 0) {
    digits ++;
    x /= 10;
  }

  return digits;
}

int main() {
  LL n;
  cin >> n;

  int ans = cnt_digits(n);
  for (LL a = 1; a * a <= n; a ++) {
    if (n % a != 0) continue;

    LL b = n / a;
    int tmp = max(cnt_digits(a), cnt_digits(b));
    if (tmp < ans) ans = tmp;
  }

  cout << ans << endl;
}
