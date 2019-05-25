#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> d(n + 1);
  for (int i = 0; i < m; i ++) {
    int l, r;
    cin >> l >> r;
    l --, r --;
    d[l] ++, d[r + 1] --;
  }
  for (int i = 0; i <= n; i ++) {
    d[i + 1] += d[i];
  }

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    if (d[i] == m) ans ++;
  }

  cout << ans << endl;
}
