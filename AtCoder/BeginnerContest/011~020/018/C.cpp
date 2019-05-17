#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int r, c, k;
  cin >> r >> c >> k;
  vector<string> s(r);
  for (int i = 0; i < r; i ++) cin >> s[i];

  vector<vector<int>> above(r, vector<int>(c));
  vector<vector<int>> below(r, vector<int>(c));
  int sum;
  for (int i = 0; i < c; i ++) {
    sum = 0;
    for (int j = 0; j < r; j ++) {
      if (s[j][i] == 'x') {
        sum = 0;
        above[j][i] = sum;
      } else {
        sum ++;
        above[j][i] = sum;
      }
    }

    sum = 0;
    for (int j = r-1; j >= 0; j --) {
      if (s[j][i] == 'x') {
        sum = 0;
        below[j][i] = sum;
      } else {
        sum ++;
        below[j][i] = sum;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < r; i ++) {
    for (int j = 0; j < c; j ++) {
      bool flag = true;
      int x = k;
      for (int l = 0; l < k; l ++) {
        if (j - l < 0 || j + l >= c) {
          flag = false;
          break;
        }
        if (above[i][j - l] < x || below[i][j - l] < x || above[i][j + l] < x || below[i][j + l] < x) {
          flag = false;
        }
        x --;
      }

      if (flag) ans ++;
    }
  }

  cout << ans << endl;
}