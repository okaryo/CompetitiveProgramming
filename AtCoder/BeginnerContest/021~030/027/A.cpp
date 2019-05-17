#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans;

  if (a == b) {
    ans = c;
  } else if (b == c) {
    ans = a;
  } else {
    ans = b;
  }
  cout << ans << endl;
}
