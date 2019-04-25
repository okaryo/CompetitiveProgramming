#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<double> R(n);
  for (int i = 0; i < n; i ++) cin >> R[i];
  sort(R.begin(), R.end());

  double ans = 0, t = 2;
  for (int i = n-1; i >= n-k; i --) {
    ans += R[i] / t;
    t *= 2;
  }

  cout << setprecision(15) << ans << endl;
}
