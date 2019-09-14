#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const int mod = 1e9 + 7;

int main() {
  int n; cin >> n;
  vector<int> t(n), a(n);
  rep(i, n) cin >> t[i];
  rep(i, n) cin >> a[i];

  vector<int> ans(n);
  bool flag = true;
  if (n == 1 && a[0] != t[0]) flag = false;
  ans[0] = 1;
  for (int i = 1; i < n; i ++) {
    if (t[i - 1] < t[i]) {
      if (a[i] < t[i]) flag = false;
      ans[i] = 1;
    } else {
      ans[i] = t[i];
    }
  }
  ans[n - 1] = 1;
  for (int i = n - 2; i >= 0; i --) {
    if (a[i] > a[i + 1]) {
      if (t[i] < a[i]) flag = false;
      ans[i] = 1;
    } else {
      ans[i] = min(ans[i], a[i]);
    }
  }

  if (flag) {
    LL res = 1;
    rep(i, n) {
      res *= ans[i];
      res %= mod;
    }
    cout << res << endl;
  } else {
    cout << 0 << endl;
  }
}