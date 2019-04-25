#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  vector<int> b(m);
  for (int i = 0; i < m; i ++) {
    cin >> a.at(i) >> b.at(i);
  }

  vector<int> c(n + 1);
  for (int i = 1; i <= n; i ++) {
    for (int j = 0; j < m; j ++) {
      if (i == a.at(j)) {
        c.at(i) ++;
      }
      if (i == b.at(j)) {
        c.at(i) ++;
      }
    }
  }

  for (int i = 1; i <= n; i ++) {
    cout << c.at(i) << endl;
  }
}
