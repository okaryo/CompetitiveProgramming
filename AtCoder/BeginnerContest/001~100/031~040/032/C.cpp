#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, k;
  int ans = 0;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    if (a.at(i) == 0) ans = n;
  }

  LL tmp = 1;
  int j = 0;
  for (int i = 0; i < n; i ++) {
    j = max(i, j);
    for (; j < n && tmp * a.at(j) <= k; j ++) {
      tmp *= a.at(j);
    }
    ans = max(ans, j - i);
    if (tmp > 1) tmp /= a.at(i);
  }

  cout << ans << endl;
}
