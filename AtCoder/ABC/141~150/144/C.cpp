#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n; cin >> n;
  LL ans = n;
  for (LL i = 1; i * i <= n; i ++) {
    if (n % i == 0) {
      ans = min(ans, (i - 1) + (n / i - 1));
    }
  }
  cout << ans << endl;
}