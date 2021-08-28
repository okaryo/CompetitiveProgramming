#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL gcd(LL a, LL b) {
  return b ? gcd(b, a % b) : a;
}

LL lcm(LL a, LL b) {
  LL tmp = a / gcd(a, b);
  return tmp * b;
}

int main() {
  int n;
  cin >> n;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  LL ans;
  if (n == 1) ans = a.at(0);
  else {
    ans = lcm(a.at(0), a.at(1));
    for (LL i = 2; i < n; i ++) {
      ans = lcm(ans, a.at(i));
    }
  }

  cout << ans << endl;
}
