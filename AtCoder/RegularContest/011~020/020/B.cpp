#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, c;
  cin >> n >> c;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  int ans = 1e9;
  for (int i = 1; i <= 10; i ++) {
    for (int j = 1; j <= 10; j ++) {
      if (i == j) continue;
      int t = 0;
      for (int k = 0; k < n; k ++) {
        if (k % 2 == 0 && a[k] != i) t += c;
        if (k % 2 == 1 && a[k] != j) t += c;
      }
      ans = min(ans, t);
    }
  }

  cout << ans << endl;
}