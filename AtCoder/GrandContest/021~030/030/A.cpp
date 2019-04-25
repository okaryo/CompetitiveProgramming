#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int d = a + b;

  int ans;
  if (c > d) {
    ans = d + b + 1;
  } else {
    ans = c + b;
  }

  cout << ans << endl;
}
