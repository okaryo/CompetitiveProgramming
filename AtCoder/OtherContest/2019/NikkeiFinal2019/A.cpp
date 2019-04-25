#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<LL> a(n);
  vector<LL> sum(n + 1);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    sum[i+1] += sum[i] + a[i];
  }

  LL ans;
  for (int i = 0; i < n; i ++) {
    ans = sum[i+1];
    for (int j = i+1; j < n; j ++) {
      sum[i+1] = sum[i+1] + a[j] - a[j-i-1];
      ans = max(ans, sum[i+1]);
    }
    cout << ans << endl;
  }
}
