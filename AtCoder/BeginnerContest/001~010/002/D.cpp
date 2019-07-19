#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(n, 0));
  for (int i = 0; i < m; i ++) {
    int x, y;
    cin >> x >> y;
    x --, y --;
    a[x][y] = a[y][x] = 1;
  }

  int ans = 0;
  for (int bit = 0; bit < (1 << n); bit ++) {
    int t = bitset<15>(bit).count();
    if (ans >= t) continue;

    bool flag = true;
    for (int i = 0; i < n; i ++) {
      for (int j = 0; j < i; j ++) {
        if (((bit & (1<<i)) && (bit & (1<<j))) && a[i][j] != 1) flag = false;
      }
    }
    if (flag) ans = t;
  }

  cout << ans << endl;
}