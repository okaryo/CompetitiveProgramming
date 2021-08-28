#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<LL> a(n + 1), b(n);
  rep(i, n + 1) cin >> a[i];
  rep(i, n) cin >> b[i];

  LL ans = 0;
  for (int i = 0; i < n; i ++) {
    ans += min(b[i], a[i] + a[i + 1]);
    b[i] = max(b[i] - a[i], (LL)0);
    a[i + 1] =  max((LL)0, a[i + 1] - b[i]);
  }

  cout << ans << endl;
}