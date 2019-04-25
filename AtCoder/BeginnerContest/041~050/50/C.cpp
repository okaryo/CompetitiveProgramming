#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());

  if (n % 2 == 0) {
    for (int i = 1; i < n; i += 2) {
      if (a.at(i) != i || a.at(i - 1) != i) {
        cout << 0 << endl;
        return 0;
      }
    }
  } else if (n % 2 == 1 && a.at(0) == 0) {
    for (int i = 2; i < n; i += 2) {
      if (a.at(i) != i || a.at(i - 1) != i) {
        cout << 0 << endl;
        return 0;
      }
    }
  } else {
    cout << 0 << endl;
    return 0;
  }

  int ans = 1;
  for (int i = 1; i <= n / 2; i ++) {
    ans *= 2;
    ans %= 1000000007;
  }

  cout << ans << endl;
}
