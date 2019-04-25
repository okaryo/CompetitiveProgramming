#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  int n; cin >> n;
  int ans = 1, a;
  for (int i = 0; i < n; i ++) {
    cin >> a;
    ans = ans * a / gcd(ans, a);
  }

  cout << ans << endl;
}
