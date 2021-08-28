#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());

  string ans = "IMPOSSIBLE";
  int GCD = a.at(0);
  for (int i = 1; i < n; i ++) {
    GCD= gcd(GCD, a.at(i));
  }
  if (k <= a.back() && k % GCD == 0) ans = "POSSIBLE";

  cout << ans << endl;
}
