#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  LL a, b; cin >> a >> b;
  vector<LL> h(n);
  rep(i, n) cin >> h[i];

  LL ans = 1e9;
  LL left = 1, right = 1e9;
  LL mid, sum;
  while (left < right) {
    mid = (left + right) / 2;
    sum = 0;
    rep(i, n) {
      if (h[i] > b * mid) {
        sum += (h[i] - (b * mid) + (a - b - 1)) / (a - b);
      }
    }

    if (sum > mid) {
      left = mid + 1;
    } else {
      right = mid;
      ans = min(ans, mid);
    }
  }

  cout << ans << endl;
}