#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL x, y;
  cin >> x >> y;
  LL ans = 0;
  while (x <= y) {
    ans ++;
    x *= 2;
  }

  cout << ans << endl;
}
