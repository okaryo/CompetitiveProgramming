#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i ++) {
    int a;
    cin >> a;
    if (a < 80) ans += 80 - a;
  }

  cout << ans << endl;
}
