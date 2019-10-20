#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  int right = 0;
  long long res = 0;
  for (int left = 0; left < n; left ++) {
    if (left == right) right ++;
    while (right < n && a[right - 1] < a[right]) {
      right ++;
    }

    res += right - left;
  }

  cout << res << endl;
}
