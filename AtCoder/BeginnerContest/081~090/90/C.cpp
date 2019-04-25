#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;
  LL ans;
  if (n == 1 && m == 1) {
    ans = 1;
  } else if (n == 1 || m == 1) {
    ans = max(n, m) - 2;
  } else {
    ans = (n - 2) * (m - 2);
  }

  cout << ans << endl;
}
