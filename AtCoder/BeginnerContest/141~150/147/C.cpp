#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<vector<int>> x(n, vector<int>(n));
  vector<vector<int>> y(n, vector<int>(n));
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    for (int j = 0; j < a[i]; j ++) {
      cin >> x[i][j] >> y[i][j];
      x[i][j] --;
    }
  }

  int ans = 0;
  for (int bit = 0; bit < (1 << n); bit ++) {
    bool ok = true;
    int sum = __builtin_popcount(bit);
    for (int i = 0; i < n; i ++) {
      if (!(bit & (1 << i))) continue;
      for (int j = 0; j < a[i]; j ++) {
        if (((bit >> (x[i][j])) & 1)  ^ y[i][j]) ok = false;
      }
    }
    if (ok) ans = max(ans, sum);
  }

  cout << ans << endl;
}
