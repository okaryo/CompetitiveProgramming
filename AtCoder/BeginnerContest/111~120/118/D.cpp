#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int x[10] = {0, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  rep(i, m) cin >> a[i];
  sort(all(a));
  reverse(all(a));

  const int inf = -100000;
  vector<int> dp(n + 1, inf);
  dp[0] = 0;
  for (int i = 1; i <= n; i ++) {
    int t = inf;
    for (int j = 0; j < m; j ++) {
      if (i - x[a[j]] >= 0) {
        t = max(t, dp[i - x[a[j]]] + 1);
      }
    }
    dp[i] = t;
  }

  while (n > 0) {
    for (int i = 0; i < m; i ++) {
      if (n - x[a[i]] >= 0) {
        if (dp[n - x[a[i]]] == dp[n] - 1) {
          cout << a[i];
          n -= x[a[i]];
          break;
        }
      }
    }
  }
  cout << endl;
}
