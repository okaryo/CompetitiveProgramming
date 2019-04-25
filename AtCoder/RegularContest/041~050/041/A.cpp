#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, k;
  cin >> x >> y >> k;

  int ans;
  if (y >= k) ans = x + k;
  else ans = x + 2*y - k;

  cout << ans << endl;
}
