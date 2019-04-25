#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i) >> b.at(i);
  }
  vector<int> c(m);
  vector<int> d(m);
  for (int i = 0; i < m; i ++) {
    cin >> c.at(i) >> d.at(i);
  }

  for (int i = 0; i < n; i ++) {
    int ans = m, min = 400000000, tmp;
    for (int j = m - 1; j >= 0; j --) {
      tmp = abs(a.at(i) - c.at(j)) + abs(b.at(i) - d.at(j));
      if (tmp <= min) {
        min = tmp;
        ans = j + 1;
      }
    }
    cout << ans << endl;
  }
}
