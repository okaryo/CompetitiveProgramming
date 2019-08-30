#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int k; cin >> k;
  vector<LL> a(k);
  rep(i, k) cin >> a[i];

  reverse(all(a));

  LL minv = 2, maxv = 2;
  for (int i = 0; i < k; i ++) {
    minv = ((minv + a[i] - 1) / a[i]) * a[i];
    maxv = (maxv / a[i]) * a[i] + a[i] - 1;
    if (minv > maxv) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << minv << " " << maxv << endl;
}