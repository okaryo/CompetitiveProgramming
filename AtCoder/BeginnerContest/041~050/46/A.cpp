#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int ans;
  if (a == b && b == c) {
    ans = 1;
  } else if (a != b && b != c && a != c) {
    ans = 3;
  } else {
    ans = 2;
  }

  cout << ans << endl;
}
