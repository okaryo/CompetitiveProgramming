#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int m, d; cin >> m >> d;


  int d1, d10;
  int ans = 0;
  for (int i = 1; i <= m; i ++) {
    for (int j = 1; j <= d; j ++) {
      int t = j;
      d1 = t % 10;
      t /= 10;
      d10 = t;
      if (d1 >= 2 && d10 >= 2 && d1 * d10 == i) ans ++;
    }
  }

  cout << ans << endl;
}