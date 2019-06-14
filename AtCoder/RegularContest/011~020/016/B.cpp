#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<char>> a(n, vector<char>(9));
  int ans = 0;
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < 9; j ++) {
      cin >> a[i][j];
      if (a[i][j] == 'x') ans ++;
    }
  }

  for (int i = 0; i < 9; i ++) {
    bool flag = false;
    for (int j = 0; j < n; j ++) {
      if (a[j][i] == 'o' && !flag) flag = true;
      if (a[j][i] != 'o' && flag) {
        ans ++;
        flag = false;
      }
    }
    if (flag) ans ++;
  }
  cout << ans << endl;
}