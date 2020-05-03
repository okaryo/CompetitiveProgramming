#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL x; cin >> x;
  vector<LL> a(1000);
  for (LL i = 0; i < 1000; i ++) {
    a[i] = pow(i, 5);
  }

  for (LL i = 0; i < 1000; i ++) {
    for (LL j = 0; j < 1000; j ++) {
      if (a[i] + a[j] == x) {
        cout << i << " " << -1 * j << endl;
        return 0;
      }
      if (a[i] - a[j] == x) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
}
