#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n; cin >> n;
  LL sum = 1;
  for (LL i = 2; i * i <= n; i ++) {
    if (n % i == 0) {
      sum += i;
      if (i * i != n) sum += n / i;
    }
  }
  if (n == 1) sum = 0;

  string ans;
  if (sum == n) ans = "Perfect";
  else if (sum < n) ans = "Deficient";
  else ans = "Abundant";
  cout << ans << endl;
}