#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL gcd(LL a, LL b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  LL a, b, c, d;
  cin >> a >> b >> c >> d;
  a --;

  LL lcm = c * d / gcd(c, d);

  LL x = b - ((b / c) + (b / d) - (b / lcm));
  LL y = a - ((a / c) + (a / d) - (a / lcm));
  cout << x - y << endl;
}