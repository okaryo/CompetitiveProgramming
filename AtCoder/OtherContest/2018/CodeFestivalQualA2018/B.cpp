#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  vector<int> l(m);
  vector<int> r(m);
  for (int i = 0; i < m; i ++) {
    cin >> l.at(i) >> r.at(i);
  }

  vector<bool> x(n);
  for (int i = 0; i < m; i ++) {
    for (int j = l.at(i) - 1; j < r.at(i); j ++) {
      x.at(j) = true;
    }
  }

  int sum = 0;
  for (int i = 0; i < n; i ++) {
    if (x.at(i)) {
      sum += a;
    } else {
      sum += b;
    }
  }

  cout << sum << endl;
}
