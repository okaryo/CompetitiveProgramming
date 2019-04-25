#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  if (k == 1) {
    int ans = 0;
    for (int i = 1; i < n; i ++) {
      ans += abs(a[i] - a[i-1]);
    }
    cout << ans << endl;
    return 0;

  } else {
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);
    for (int i = 2; i < n; i ++) {
      dp[i] = min(dp[i-1] + abs(a[i]-a[i-1]), dp[i-2] + abs(a[i]-a[i-2]));
      for (int j = 3; j <= k && j <= i; j ++) {
        dp[i] = min(dp[i], dp[i-j] + abs(a[i]-a[i-j]));
      }
    }
    cout << dp[n-1] << endl;
  }
}
