#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];
  reverse(a.begin(), a.end());
  
  vector<LL> dp(n, 1e9);
  dp[0] = a[0];
  LL length = 1;
  for (int i = 1; i < n; i ++) {
    if (dp[length - 1] <= a[i]) dp[length ++] = a[i];
    else *upper_bound(dp.begin(), dp.begin() + length, a[i]) = a[i];
  }

  cout << length << endl;
}