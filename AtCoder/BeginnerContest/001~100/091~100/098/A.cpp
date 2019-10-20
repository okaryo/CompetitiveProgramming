#include <bits/stdc++.h>
using namespace std;

int min(int a, int b) {
  int x = a + b;
  int y = a - b;
  int z = a * b;

  if (x >= y && x >= z) {
    return x;
  } else if (y > x && y >= z) {
    return y;
  } else {
    return z;
  }
}

int main() {
  int a, b;
  cin >> a >> b;

  int ans = min(a, b);

  cout << ans << endl;
}
