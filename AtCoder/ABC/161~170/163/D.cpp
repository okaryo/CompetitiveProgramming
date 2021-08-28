#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, k;
  cin >> n >> k;
  const int mod = 1e9 + 7;

  LL ans = 0;
  for (LL i = k; i <= n + 1; i ++) {
    ans += -1 * i * i + (n + 1) * i + 1;
    ans %= mod;
  }

  cout << ans << endl;
}
