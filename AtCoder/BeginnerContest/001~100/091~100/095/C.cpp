#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;

  int d = 2 * c;
  int ans = 1000000000;
  for (int i = 0; i <= max(x, y); i ++) {
    int tmp = i * d + max(0, x - i) * a + max(0, y - i) * b;
    ans = min(ans, tmp);
  }

  cout << ans << endl;
}
