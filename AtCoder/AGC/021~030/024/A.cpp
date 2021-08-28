#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL a, b, c, k;
  cin >> a >> b >> c >> k;

  LL ans;
  if (k % 2 == 0) {
    ans = a - b;
  } else {
    ans = b - a;
  }
  cout << ans << endl;
}
