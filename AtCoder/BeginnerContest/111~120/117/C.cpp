#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;
  vector<LL> a(m);
  for (int i = 0; i < m; i ++) {
    cin >> a.at(i);
  }

  LL ans = 0;
  if (n < m) {
    LL x = n;
    sort(a.begin(), a.end());
    vector<int> b(0);
    for (int i = 1; i < m; i ++) {
      int tmp = a.at(i) - a.at(i - 1);
      b.push_back(tmp);
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < m - x; i ++) {
      ans += b.at(i);
    }
  }

  cout << ans << endl;
}
