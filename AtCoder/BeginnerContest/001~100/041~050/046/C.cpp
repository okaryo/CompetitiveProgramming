#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<LL> t(n), a(n);
  for (int i = 0; i < n; i ++) cin >> t[i] >> a[i];

  LL T = 1, A = 1, m, x, y;
  for (int i = 0; i < n; i ++) {
    x = T / t[i];
    y = A / a[i];
    if (T % t[i] != 0) x ++;
    if (A % a[i] != 0) y ++;

    m = max(x, y);
    T = m * t[i];
    A = m * a[i];
  }

  cout << T + A << endl;
}
