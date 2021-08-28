#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL a, b;
  cin >> a >> b;

  LL ans;
  if (a * b > 0) ans = b - a;
  else ans = b - a - 1;

  cout << ans << endl;
}
