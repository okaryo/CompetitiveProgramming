#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> t(n);
  for (int i = 0; i < n; i ++) cin >> t[i];

  int s = t[0] + t[1];
  int ans = -1;
  for (int i = 2; i < n; i ++) {
    s += t[i];
    if (s < k) {
      ans = i + 1;
      break;
    }
    s -= t[i - 2];
  }

  cout << ans << endl;
}
