#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  if (n == 1) {
    cout << a.at(0) << endl;
    return 0;
  }

  int ans = 0;
  int tmp_min = 0;
  for (int i = 1; i < n; i ++) {
    if (a.at(i) >= a.at(i - 1) && i == n - 1) ans += a.at(i) - tmp_min;
    else if (a.at(i) >= a.at(i - 1)) continue;
    else {
      ans += a.at(i - 1) - tmp_min;
      tmp_min = a.at(i);
    }
  }

  cout << ans << endl;
}
