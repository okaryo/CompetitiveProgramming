#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int N = 200010;
LL mod = 1e9 + 7;

int main() {
  LL n; cin >> n;
  vector<LL> c(n);
  vector<LL> a[N];
  for (int i = 0; i < n; i ++) {
    cin >> c[i];
    if (i != a[c[i]].back()+1) {
      a[c[i]].push_back(i);
    }
  }

  LL ans = 1;
  for (int i = 1; i <= n; i ++) {
    for (int j = 1; j < a[i].size(); j ++) {
      if (a[i][j] - a[i][j-1] > 1) {
        ans += a[i][j] - a[i][j-1] - 1;
        ans %= mod;
      } 
    }
    if (a[i].size() == 1) ans --;
  }

  cout << ans << endl;
}