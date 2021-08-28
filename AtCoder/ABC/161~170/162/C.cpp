#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  int x; cin >> x;

  LL sum = 0;
  for (int i = 1; i <= x; i ++) {
    for (int j = 1; j <= x; j ++) {
      for (int k = 1; k <= x; k ++) {
        sum += gcd(i, gcd(j, k));
      }
    }
  }

  cout << sum << endl;
}
