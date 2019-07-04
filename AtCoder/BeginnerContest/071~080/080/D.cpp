#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, ch;
  cin >> n >> ch;
  vector<int> a(n), b(n), c(n);
  for (int i = 0; i < n; i ++) cin >> a[i] >> b[i] >> c[i];

  vector<int> sum(200000 + 2, 0);
  for (int i = 1; i <= ch; i ++) {
    vector<int> t(200000 + 2, 0);
    for (int j = 0; j < n; j ++) {
      if (c[j] == i) t[2 * (a[j] - 0.5)] ++, t[2 * b[j]] --;
    }
    for (int j = 1; j < 200002; j ++) t[j] += t[j - 1];
    for (int j = 0; j < 200002; j ++) {
      if (t[j] > 0) sum[j] ++;
    }
  }

  int ans = 0;
  for (int i = 1; i < 200002; i ++) ans = max(ans, sum[i]);

  cout << ans << endl;
}