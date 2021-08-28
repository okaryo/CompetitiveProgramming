#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), cnt(n);
  cnt[0] = 1;
  for (int i  = 0; i < n; i ++) {
    cin >> a[i];
    if (i) {
      if (a[i] > a[i - 1]) cnt[i] = cnt[i - 1] + 1;
      else cnt[i] = 1;
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    if (cnt[i] >= k) ans ++;
  }
  cout << ans << endl;
}