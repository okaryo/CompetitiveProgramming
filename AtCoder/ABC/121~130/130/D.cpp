#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, k;
  cin >> n >> k;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  LL ans = 0, sum = 0;
  LL right = 0;
  for (int left = 0; left < n; left ++) {
    while (right < n && sum + a[right] < k) {
      sum += a[right];
      right ++;
    }
    ans += n - right;

    sum -= a[left];
  }

  cout << ans << endl;
}
