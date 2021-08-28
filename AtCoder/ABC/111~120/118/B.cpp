#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m + 1);
  for (int i = 0; i < n; i ++) {
    int k; cin >> k;
    for (int i = 0; i < k; i ++) {
      int j; cin >> j;
      a[j] ++;
    }
  }

  int ans = 0;
  for (int i = 0; i <= m; i ++) {
    if (a[i] == n) ans ++;
  }

  cout << ans << endl;
}
