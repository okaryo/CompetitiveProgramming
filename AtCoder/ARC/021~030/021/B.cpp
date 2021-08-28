#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<LL> b(n);
  for (int i = 0; i < n; i ++) cin >> b[i];

  LL check = b[0];
  for (int i = 1; i < n - 1; i ++) check ^= b[i];
  if (check != b.back()) {
    cout << -1 << endl;
    return 0;
  }

  LL a = 0;
  cout << a << endl;
  for (int i = 0; i < n - 1; i ++) {
    a ^= b[i];
    cout << a << endl;
  }
}