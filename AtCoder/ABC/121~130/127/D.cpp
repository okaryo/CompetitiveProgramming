#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, m;
  cin >> n >> m;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];
  sort(a.begin(), a.end());

  pair<LL, LL> p[m];
  for (int i = 0; i < m; i ++) {
    int b, c;
    cin >> b >> c;
    p[i].first = c, p[i].second = b;
  }
  sort(p, p + m);
  reverse(p, p + m);

  LL left = 0, right;
  LL ans = 0;
  for (int i = 0; i < m; i ++) {
    if (left >= n) break;

    right = lower_bound(a.begin() + left, min(a.begin() + left + p[i].second - 1, a.end() - 1), p[i].first) - a.begin();
    if (a[right] > p[i].first) {
      ans += p[i].first * (right - left);
      left = right;
    } else if (a[left] < p[i].first) {
      ans += p[i].first * (right - left + 1);
      left = right + 1;
    } else {
      break;
    }
  }
  if (left < n) {
    for (int i = left; i < n; i ++) ans += a[i];
  }

  cout << ans << endl;
}
