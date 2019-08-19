#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, t; cin >> n >> t;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int minv = a[0];
  int tmp_diff = 0;
  int ans = 0;
  for (int i = 1; i < n; i ++) {
    if (a[i] < minv) {
      minv = a[i];
      continue;
    }
    if (tmp_diff < a[i] - minv) {
      tmp_diff = a[i] - minv;
      ans = 1;
    } else if (tmp_diff == a[i] - minv) {
      ans ++;
    }
  }

  cout << ans << endl;
}