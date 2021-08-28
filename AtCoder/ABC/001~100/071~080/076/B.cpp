#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int ans = 1;
  for (int i = 0; i < n; i ++) {
    if (ans * 2 >= ans + k) {
      ans += k;
    } else {
      ans *= 2;
    }
  }

  cout << ans << endl;
}
