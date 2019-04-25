#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  LL sum1 = 0, ans1 = 0;
  for (int i = 0; i < n; i ++) {
    sum1 += a[i];
    if (i % 2 == 0) {
      if (sum1 >= 0) {
        ans1 += sum1 + 1;
        sum1 = -1;
      }
    } else {
      if (sum1 <= 0) {
        ans1 += abs(sum1) + 1;
        sum1 = 1;
      }
    }
  }

  LL sum2 = 0, ans2 = 0;
  for (int i = 0; i < n; i ++) {
    sum2 += a[i];
    if (i % 2 == 0) {
      if (sum2 <= 0) {
        ans2 += abs(sum2) + 1;
        sum2 = 1;
      }
    } else {
      if (sum2 >= 0) {
        ans2 += sum2 + 1;
        sum2 = -1;
      }
    }
  }

  cout << min(ans1, ans2) << endl;
}
