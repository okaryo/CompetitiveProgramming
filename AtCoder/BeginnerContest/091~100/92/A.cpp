#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int train = 0, bus = 0;
  if (a >= b) {
    train = b;
  } else {
    train = a;
  }
  if (c >= d) {
    bus = d;
  } else {
    bus = c;
  }
  
  int ans = train + bus;
  cout << ans << endl;
}
