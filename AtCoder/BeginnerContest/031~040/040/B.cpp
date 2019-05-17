#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 100000;
  for (int i = 1; i <= n; i ++) {
    for (int j = 1; i * j <= n; j ++) {
      int tmp = abs(i - j) + (n - i * j);
      ans = min(ans, tmp);
    }
  }

  cout << ans << endl;
}
