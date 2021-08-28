#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL A, B, Q;
  cin >> A >> B >> Q;
  vector<LL> a(A), b(B);
  for (int i = 0; i < A; i ++) cin >> a[i];
  for (int i = 0; i < B; i ++) cin >> b[i];

  LL x, j1, j2, k1, k2;
  for (int i = 0; i < Q; i ++) {
    cin >> x;

    j1 = lower_bound(a.begin(), a.end(), x) - a.begin();
    k1 = lower_bound(b.begin(), b.end(), x) - b.begin();
    j2 = j1 - 1;
    k2 = k1 - 1;

    LL res = 1e18;
    if (j1 < A && k1 < B) {
      res = min(res, (a[j1] - x) + abs(a[j1] - b[k1]));
      res = min(res, (b[k1] - x) + abs(a[j1] - b[k1]));
    }
    if (j2 >= 0 && k2 >= 0) {
      res = min(res, (x - a[j2]) + abs(a[j2] - b[k2]));
      res = min(res, (x - b[k2]) + abs(a[j2] - b[k2]));
    }
    if (j1 < A && k2 >= 0) {
      res = min(res, (a[j1] - x) + abs(a[j1] - b[k2]));
      res = min(res, (x - b[k2]) + abs(a[j1] - b[k2]));
    }
    if (j2 >= 0 && k1 < B) {
      res = min(res, (x - a[j2]) + abs(a[j2] - b[k1]));
      res = min(res, (b[k1] - x) + abs(a[j2] - b[k1]));
    }

    cout << res << endl;
  }
}
