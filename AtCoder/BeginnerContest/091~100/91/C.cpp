#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  pair<int, int> a[n], b[n];
  for (int i = 0; i < n; i ++) cin >> a[i].second >> a[i].first;
  for (int i = 0; i < n; i ++) cin >> b[i].first >> b[i].second;
  sort(a, a + n);
  reverse(a, a + n);
  sort(b, b + n);

  int ans = 0;
  bool used[n];
  for (int i = 0; i < n; i ++) used[i] = false;
  for (int i = 0; i < n; i ++) {
    for (int j = 0 ; j < n; j ++) {
      if (used[j]) continue;
      if (a[j].second < b[i].first && a[j].first < b[i].second) {
        ans ++;
        used[j] = true;
        break;
      }
    }
  }

  cout << ans << endl;
}
