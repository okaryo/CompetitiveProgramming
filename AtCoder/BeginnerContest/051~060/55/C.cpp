#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;

  LL ans = 0;
  if (m >= n * 2) {
    ans += n;
    ans += (m - n * 2) / 4;
  } else {
    ans += m / 2;
  }

  cout << ans << endl;
}
