#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int a[3][3];
  bool check[3][3];
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j ++) {
      cin >> a[i][j];
      check[i][j] = false;
    }
  }

  int n; cin >> n;
  int t;
  for (int b = 0; b < n; b ++) {
    cin >> t;
    for (int i = 0; i < 3; i ++) {
      for (int j = 0; j < 3; j ++) {
        if (a[i][j] == t) check[i][j] = true;
      }
    }
  }

  string ans = "No";
  for (int i = 0; i < 3; i ++) {
    if (check[i][0] && check[i][1] && check[i][2]) ans = "Yes";
    if (check[0][i] && check[1][i] && check[2][i]) ans = "Yes";
  }
  if (check[2][0] && check[1][1] && check[0][2]) ans = "Yes";
  if (check[0][0] && check[1][1] && check[2][2]) ans = "Yes";

  cout << ans << endl;
}
