#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  int m = 3 * n;
  vector<int> a(m);
  for (int i = 0; i < m; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());

  LL ans = 0;
  for (int i = m - 2; i >= n; i -= 2) {
    ans += a.at(i);
  }

  cout << ans << endl;
}
