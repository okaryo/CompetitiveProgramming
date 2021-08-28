#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  double ans = 0;
  for (int i = 0; i < n; i ++) {
    int sum = 0;
    for (int j = 0; j < n; j ++) {
      if (i == j) continue;
      if (a[i] % a[j] == 0) sum ++;
    }

    if (sum % 2 == 0) {
      ans += (double)(sum + 2) / (2*sum + 2);
    } else {
      ans += 0.5;
    }
  }

  cout << setprecision(15) << ans << endl;
}
