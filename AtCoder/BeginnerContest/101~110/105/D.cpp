#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  vector<vector<LL>> dp(n, vector<LL> (n));
  int cnt = 0;
  for (int i = 0; i < n; i ++) {
    for (int j = i; j < n; j ++) {
      if (i == j) dp[i][j] = a[i] % m;
      else {
        dp[i][j] = (dp[i][j-1] + a[j]) % m;
      }
      if (dp[i][j] % m == 0) cnt ++;
    }
  }

  cout << cnt << endl;
}
