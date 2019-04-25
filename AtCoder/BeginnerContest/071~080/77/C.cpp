#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n;
  cin >> n;
  /*vector<LL> a(n+2), b(n), c(n+2);
  for (int i = 1; i <= n; i ++) cin >> a.at(i);
  for (int i = 0; i < n; i ++)  cin >> b.at(i);
  for (int i = 1; i <= n; i ++) cin >> c.at(i);
  a[n+1] = 1000000001, c[n+1] = 1000000001;
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());

  LL ans = 0, top, bottom;
  LL left, right, mid;
  for (int i = 0; i < n; i ++) {
    top = 0, left = 1, right = n+2;
    while (left < right) {
      mid = (left + right) / 2;
      if (a[mid] < b[i] && b[i] <= a[mid+1]) {
        top = mid;
        break;
      }
      if (a[mid] <= b[i]) left = mid + 1;
      else right = mid;
    }

    bottom = 0, left = 0, right = n+1;
    while (left < right) {
      mid = (left + right) / 2;
      if (c[mid] <= b[i] && b[i] < c[mid+1]) {
        bottom = n - mid;
        break;
      }
      if (c[mid] <= b[i]) left = mid + 1;
      else right = mid;
    }

    ans += top * bottom;
  }*/

  vector<LL> a(n), b(n), c(n);
  for (int i = 0; i < n; i ++) cin >> a[i];
  for (int i = 0; i < n; i ++) cin >> b[i];
  for (int i = 0; i < n; i ++) cin >> c[i];
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());

  LL ans = 0, x, y;
  for (int i = 0; i < n; i ++) {
    x = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    y = c.end() - upper_bound(c.begin(), c.end(), b[i]);
    ans += x * y;
  }

  cout << ans << endl;
}
