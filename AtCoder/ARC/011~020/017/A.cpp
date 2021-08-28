#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  double m = sqrt(n);
  string ans = "YES";
  for (int i = 2; i <= m; i ++) {
    if (n % i == 0) {
      ans = "NO";
      break;
    }
  }

  cout << ans << endl;
}
