#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s, t;
  cin >> n >> s >> t;
  int ans = n;

  for (int i = 0; i < n; i ++) {
    if (s.substr(i, n - i) == t.substr(0, n - i)) {
      break;
    } else {
      ans ++;
    }
  }

  cout << ans << endl;
}
