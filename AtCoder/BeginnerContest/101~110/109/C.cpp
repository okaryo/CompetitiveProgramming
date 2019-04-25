#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
  if (x < y) swap(x, y);
  return y != 0 ? gcd(y, x % y) : x;
}

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    int tmp;
    cin >> tmp;
    a.at(i) = abs(x - tmp);
  }

  int ans = a.front();
  for (int i = 1; i < n; i ++) {
    ans = gcd(ans, a.at(i));
  }

  cout << ans << endl;
}
