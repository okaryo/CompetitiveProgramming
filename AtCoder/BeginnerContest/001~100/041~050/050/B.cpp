#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  for (int i = 0; i < n; i ++) {
    cin >> t.at(i);
  }
  int m;
  cin >> m;
  vector<int> p(m);
  vector<int> x(m);
  for (int i = 0; i < m; i ++) {
    cin >> p.at(i) >> x.at(i);
  }

  for (int i = 0; i < m; i ++) {
    int sum = 0;
    for (int j = 0; j < n; j ++) {
      if (p.at(i) == j + 1) {
        sum += x.at(i);
      } else {
        sum += t.at(j);
      }
    }
    cout << sum << endl;
  }
}
