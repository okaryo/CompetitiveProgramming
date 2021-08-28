#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  vector<int> a(3);
  for (int i = 0; i < 3; i ++) cin >> a[i];

  int ans = 0, tmp;
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j ++) {
      if (i == j) continue;
      for (int k = 0; k < 3; k ++) {
        if (i == k || j == k) continue;
        tmp = (n / a[i]) * (m / a[j]) * (l / a[k]);
        ans = max(ans, tmp);
      }
    }
  }

  cout << ans << endl;
}
