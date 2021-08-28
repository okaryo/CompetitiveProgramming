#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  LL ans = 0;
  for (int b = 1; b <= n; b ++) {
    int p = n / b;
    int r = n % b;
    LL sum = p * max(0, b - k) + max(0, r - k + 1);
    if (k == 0) sum --;
    ans += sum;
  }
  cout << ans << endl;
}