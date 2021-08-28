#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

LL gcd(LL a, LL b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  LL a, b;
  cin >> a >> b;
  cout << a * b / gcd(a, b) << endl;
}