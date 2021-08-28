#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];

  int ans = 0;
  int t = p[0];
  for (int i = 0; i < n; i ++) {
    if (t >= p[i]) {
      ans ++;
      t = min(t, p[i]);
    }
  }

  cout << ans << endl;
}