#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

const int mod = 1e9 + 7;

int main() {
  LL n; cin >> n;
  map<LL, LL> mp;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    mp[a[i]] ++;
  }

  sort(a.begin(), a.end());
  LL sum = 0;
  for (LL i = 0; i < n; i ++) {
    sum += a[i] * (n - i);
  }

  vector<LL> fac(100000 + 1);
  fac[0] = 1;
  for (LL i = 1; i <= 100000; i ++) fac[i] = (i * fac[i - 1]) % mod;

  LL ans = 1;
  for (auto x: mp) {
    ans *= fac[x.second];
    ans %= mod;
  }

  cout << sum << endl;
  cout << ans << endl;
}