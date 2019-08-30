#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<LL> sum(n);
  LL ans = 0;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    sum[i] = a + b;
    ans -= b;
  }

  sort(sum.rbegin(), sum.rend());
  for (int i = 0; i < n; i ++) {
    if (i % 2 == 0) {
      ans += sum[i];
    }
  }

  cout << ans << endl;
}
