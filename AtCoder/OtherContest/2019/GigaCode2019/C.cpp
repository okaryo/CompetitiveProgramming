#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n; cin >> n;
  vector<LL> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  const LL no = 2e9 + 7;
  LL ans = no;
  LL sum = 0;
  rep(i, n) {
    sum += a[i];
    if (sum >= b[i]) ans = min(ans, b[i]);
  }

  if (ans == no) ans = -1;
  cout << ans << endl;
}