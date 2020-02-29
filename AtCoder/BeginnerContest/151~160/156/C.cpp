#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 1e9;
  for (int i = 1; i <= 100; i ++) {
    int sum = 0;
    for (int j = 0; j < n; j ++) {
      sum += (a[j] - i) * (a[j] - i);
    }
    ans = min(ans, sum);
  }

  cout << ans << endl;
}
