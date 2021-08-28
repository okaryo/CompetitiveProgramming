#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n, 0);
  for (int i = 0; i < k; i ++) {
    int d; cin >> d;
    for (int j = 0; j < d; j ++) {
      int t; cin >> t;
      t --;
      a[t] ++;
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    if (a[i] == 0) ans ++;
  }

  cout << ans << endl;
}