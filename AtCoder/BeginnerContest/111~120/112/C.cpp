#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x[105], y[105], h[105];
  for (int i = 0; i < n; i ++) {
    cin >> x[i] >> y[i] >> h[i];
  }

  for (int cx = 0; cx <= 100; cx ++) {
    for (int cy = 0; cy <= 100; cy ++) {
      bool ok = true;
      int ans = 0, max = INT32_MAX;
      for (int i = 0; i < n; i ++) {
        int tmp = abs(x[i] - cx) + abs(y[i] - cy);
        if (h[i] == 0) {
          max = min(max, tmp);
        } else {
          if (ans == 0) {
            ans = tmp + h[i];
          } else if (ans != tmp + h[i]) {
            ok = false;
            break;
          }
        }
        if (ans > max) {
          ok = false;
          break;
        }
      }
      if (ok) {
        cout << cx << " " << cy << " " << ans << endl;
        return 0;
      }
    }
  }
}
