#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, Q;
  cin >> n >> Q;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  for (int i = 0; i < Q; ++i) {
    long long x; cin >> x;

    long long res = 0;

    int right = 0;
    long long sum = 0;
    for (int left = 0; left < n; ++left) {
      while (right < n && sum + a[right] <= x) {
        sum += a[right];
        right ++;
      }
      res += right - left;

      if (left == right) right ++;
      else sum -= a[left];
    }

    cout << res << endl;
  }
}
