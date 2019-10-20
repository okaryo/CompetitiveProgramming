#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    int t; cin >> t;
    while (t % 2 == 0) {
      t /= 2;
    }
    a[i] = t;
  }
  sort(a.begin(), a.end());

  int ans = 1;
  int now = a[0];
  for (int i = 1; i < n; i ++) {
    if (now != a[i]) {
      ans ++;
      now = a[i];
    }
  }

  cout << ans << endl;
}
