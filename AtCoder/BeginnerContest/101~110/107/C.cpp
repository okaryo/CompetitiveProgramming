#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  LL ans = 1e9;
  for (int i = 0; i <= n - k; i ++) {
    LL tmp1 = abs(a.at(i)) + abs(a.at(i) - a.at(i + k - 1));
    LL tmp2 = abs(a.at(i + k - 1)) + abs(a.at(i + k - 1) - a.at(i));
    ans = min(ans, min(tmp1, tmp2));
  }

  cout << ans << endl;
}
