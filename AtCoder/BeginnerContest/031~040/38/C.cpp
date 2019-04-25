#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }

  LL ans = 0;
  LL tmp = 1;
  for (int i = 1; i < n; i ++) {
    if (a.at(i) > a.at(i - 1) && i == n - 1) {
      tmp ++;
      ans += tmp * (1 + tmp) / 2;
    } else if (a.at(i) > a.at(i - 1)) {
      tmp ++;
    } else if (a.at(i) <= a.at(i - 1) && i == n - 1) {
      ans += tmp * (1 + tmp) / 2 + 1;
    } else {
      ans += tmp * (1 + tmp) / 2;
      tmp = 1;
    }
  }

  cout << ans << endl;
}
