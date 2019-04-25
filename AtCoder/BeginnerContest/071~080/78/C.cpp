#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  LL x = 1900 * m + (n - m) * 100;
  LL ans = x * pow(2, m);

  cout << ans << endl;
}
