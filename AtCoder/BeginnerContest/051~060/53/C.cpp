#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL x;
  cin >> x;

  LL a = (x / 11) * 2;
  LL b = x % 11;
  LL ans = a;
  if (b > 6) ans += 2;
  else if (b > 0) ans += 1;

  cout << ans << endl;
}
