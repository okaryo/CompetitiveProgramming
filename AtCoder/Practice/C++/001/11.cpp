#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL c, d;
  cin >> c >> d;

  LL ans = 0;
  LL left = 140, right = 170;
  while (left < d) {
    if (c <= left && right <= d) ans += right - left;
    else if (left <= c && d <= right) ans += d - c;
    else if (left <= c && c <= right) ans += right - c;
    else if (left < d && d <= right) ans += d - left;

    left *= 2, right *= 2;
  }

  cout << ans << endl;
}