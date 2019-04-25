#include <iostream>
using namespace std;

int n, q, m;
int a[20];

int solve(int i, int m) {
  if (m == 0) return 1;
  if (i >= n) return 0;
  int res = solve(i+1, m) || solve(i+1, m - a[i]);
  return res;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i ++) cin >> a[i];
  cin >> q;
  for (int i = 0; i < q; i ++) {
    cin >> m;
    if (solve(0, m)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}
