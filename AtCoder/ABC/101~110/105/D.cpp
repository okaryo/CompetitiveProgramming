#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    a[i] %= m;
  }

  vector<LL> dp(n + 1);
  map<LL, LL> mp;
  for (int i = 1; i <= n; i ++) {
    dp[i] = (dp[i - 1] + a[i - 1]) % m;
    mp[dp[i]] ++;
  }

  LL ans = 0;
  for (auto x : mp) {
    ans += (x.second * (x.second - 1)) / 2;
    if (x.first == 0) ans += x.second; 
  }

  cout << ans << endl;
}
