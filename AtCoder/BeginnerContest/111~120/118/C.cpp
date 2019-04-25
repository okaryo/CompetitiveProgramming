#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  LL n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
  }

  LL ans = gcd(a[0], a[1]);
  for (int i = 2; i < n; i ++) {
    ans = gcd(ans, a[i]);
  }

  cout << ans << endl;
}
