#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int c = abs(a - b);
  int ans = 0;
  while (c >= 10) {
    ans ++;
    c -= 10;
  }
  if (c == 9) ans += 2;
  else if (c == 8 || c == 7) ans += 3;
  else if (c == 6) ans += 2;
  else if (c == 5) ans ++;
  else if (c == 4) ans += 2;
  else ans += c;

  cout << ans << endl;
}