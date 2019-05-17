#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, t;
  cin >> x >> t;

  int ans;
  if (x >= t) {
    ans = x - t;
  } else {
    ans = 0;
  }

  cout << ans << endl;
}
