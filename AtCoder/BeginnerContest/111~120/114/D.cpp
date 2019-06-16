#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n + 1);
  for (int i = 2; i <= n; i ++) {
    int tmp = i;
    for (int j = 2; j <= i; j ++) {
      while (tmp % j == 0) {
        a[j] ++;
        tmp /= j;
      }
    }
  }

  int b[5] = {}; // 2, 4, 14, 24, 74
  for (int i = 2; i <= n; i ++) {
    if (a[i] >=  2) b[0] ++;
    if (a[i] >=  4) b[1] ++;
    if (a[i] >= 14) b[2] ++;
    if (a[i] >= 24) b[3] ++;
    if (a[i] >= 74) b[4] ++;
  }

  LL ans = b[1] * max(0, b[1] - 1) * max(0, b[0] - 2) / 2 + b[2] * max(0, b[1] - 1) + b[3] * max(0, b[0] - 1) + b[4];
  cout << ans << endl;
}