#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> l(q);
  vector<int> r(q);
  vector<int> t(q);
  for (int i = 0; i < q; i ++) {
    cin >> l.at(i) >> r.at(i) >> t.at(i);
  }

  vector<int> a(n);
  for (int i = 0; i < q; i ++) {
    int x = l.at(i) - 1;
    while (x < r.at(i)) {
      a.at(x) = t.at(i);
      x ++;
    }
  }

  for (int i = 0; i < n; i ++) {
    cout << a.at(i) << endl;
  }
}
