#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n + 1, -1);
  for (int i = 1; i <= n; i ++) a[i] = i;

  int now = 0;
  for (int i = 0; i < m; i ++) {
    int t; cin >> t;
    for (int i = 0; i <= n; i ++) {
      if (t == a[i]) {
        swap(now, a[i]);
        now = t;
        break;
      }
    }
  }

  for (int i = 1; i <= n; i ++) cout << a[i] << endl;
}