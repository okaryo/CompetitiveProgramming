#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<LL> a(n + 1, 0);
  for (int i = 1; i <= n; i ++) cin >> a[i];

  vector<LL> sum(n + 1, 0);
  vector<LL> ans(n + 1, 0);
  LL num = 0, t;
  for (int i = n; i > 0; i --) {
    if (a[i] == 1) {
      if (sum[i] % 2 == 0) {
        num ++;
        ans[i] = 1;
        t = i;
        for (int j = 1; j * j <= t; j ++) {
          if (t % j == 0) {
            if (j * j == t) sum[j] ++;
            else sum[j] ++, sum[t / j] ++;
          }
        }
      }
    } else {
      if (sum[i] % 2 == 1) {
        num ++;
        ans[i] = 1;
        t = i;
        for (int j = 1; j * j <= t; j ++) {
          if (t % j == 0) {
            if (j * j == t) sum[j] ++;
            else sum[j] ++, sum[t / j] ++;
          }
        }
      }
    }
  }

  cout << num << endl;
  for (int i = 1; i <= n; i ++) {
    if (ans[i] > 0) cout << i << endl;
  }
}