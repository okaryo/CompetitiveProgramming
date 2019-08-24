#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const LL mod = 1e9 + 7;

int main() {
  LL n, k;
  cin >> n >> k;
  vector<LL> a(n);
  rep(i, n) cin >> a[i];

  LL ans = 0;
  rep(i, n) {
    LL right = 0, left = 0;
    for (int j = i - 1; j >= 0; j --) {
      if (a[j] < a[i]) left ++;
    }
    for (int j = i + 1; j < n; j ++) {
      if (a[i] > a[j]) right ++;
    }
    LL t = (k * k) % mod;
    LL rl = (right + left) % mod;
    LL x = (((k * (k - 1) / 2) % mod)) % mod;
    LL y = (((k * (k + 1) / 2) % mod)) % mod;
    // ans += (((t * rl) % mod - (right * y) % mod) % mod - (left * x) % mod) % mod;
    ans += (((right * y) % mod) + ((left * x) % mod)) % mod;
    ans %= mod;
  }
  cout << ans << endl;
}
