#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i ++) cin >> x[i] >> y[i];

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    for (int j = i + 1; j < n; j ++) {
      for (int k = j + 1; k < n; k ++) {
        LL a = x[i] - x[k];
        LL b = y[i] - y[k];
        LL c = x[j] - x[k];
        LL d = y[j] - y[k];
        LL e = a * d - b * c;
        if (e != 0 && e % 2 == 0) ans ++;
      }
    }
  }

  cout << ans << endl;
}