#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = n;
  for (int i = 0; i <= n; i ++) {
    int cc = 0, t = i;
    while (t > 0) {
      cc += t % 6;
      t /= 6;
    }
    t = n - i;
    while (t > 0) {
      cc += t % 9;
      t /= 9;
    }
    if (ans > cc) ans = cc;
  }

  cout << ans << endl;
}
