#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;

  double x, ans;
  string y;
  for (int i = 0; i < n; i ++) {
    cin >> x >> y;
    if (y == "BTC") ans += x * 380000;
    else ans += x;
  }

  cout << setprecision(15) << ans << endl;
}
