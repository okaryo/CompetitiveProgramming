#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  vector<LL> b(n + 1);
  for (int i = 0; i < n; i ++) {
    b.at(i + 1) = b.at(i) + a.at(i);
  }

  LL ans = 0;
  for (int i = 0; i < n - k + 1; i ++) {
    ans += b.at(i + k) - b.at(i);
  }

  cout << ans << endl;
}
