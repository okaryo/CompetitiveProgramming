#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL q, h, s, d, n;
  cin >> q >> h >> s >> d >> n;

  LL H = min(h, 2 * q);
  LL S = min(s, 2 * H);
  LL ans;
  if (d >= 2 * S) {
    ans = n * S;
  } else {
    ans = (n / 2) * d + (n % 2) * S;
  }

  cout << ans << endl;
}
