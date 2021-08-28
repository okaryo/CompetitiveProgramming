#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, k; cin >> n >> k;
  vector<LL> a(n);
  rep(i, n) cin >> a[i];

  LL ans = 0, x = 0;
  for (int i = 40; i >= 0; i --) {
    LL t = (1LL << i);
    LL num = 0;
    for (int j = 0; j < n; j ++) {
      num += 1 & (a[j] >> i);
    }
    if (2 * num >= n) ans += t * num;
    else if (x + t <= k) {
      ans += t * (n - num);
      x += t;
    }
    else ans += t * num;
  }

  cout << ans << endl;
}