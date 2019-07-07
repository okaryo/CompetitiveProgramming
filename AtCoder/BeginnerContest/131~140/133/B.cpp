#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, d; cin >> n >> d;
  vector<vector<int>> a(n, vector<int>(d));
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < d; j ++) cin >> a[i][j];
  }

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    for (int j = i + 1; j < n; j ++) {
      int t = 0;
      for (int k = 0; k < d; k ++) {
        t += (a[i][k] - a[j][k]) * (a[i][k] - a[j][k]);
      }
      for (int k = 1; k * k <= t; k ++) {
        if (k * k == t) ans ++;
      }
    }
  }

  cout << ans << endl;
}