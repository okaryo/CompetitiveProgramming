#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  LL sum = 0;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    sum += a.at(i);
  }

  LL x = 0, ans = 1000000000000000000;
  for (int i = 0; i < n - 1; i ++) {
    x += a.at(i);
    ans = min(ans, abs(sum - x * 2));
  }

  cout << ans << endl;
}
