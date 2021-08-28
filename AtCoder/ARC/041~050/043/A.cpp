#include <bits/stdc++.h>
using namespace std;

int main() {
  long double n, a, b;
  cin >> n >> a >> b;
  long double sum = 0, maxs = 0, mins = 1e9;
  for (int i = 0; i < n; i ++) {
    long double t; cin >> t;
    sum += t;
    maxs = max(t, maxs);
    mins = min(t, mins);
  }

  if (maxs == mins) {
    cout << -1 << endl;
    return 0;
  }

  long double p = b / (maxs - mins);
  long double q = a - (sum * p) / n;

  cout << setprecision(15) << p << " " << setprecision(15) << q << endl;
}
