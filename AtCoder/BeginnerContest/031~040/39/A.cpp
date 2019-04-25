#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int x = a * b;
  int y = b * c;
  int z = c * a;
  int ans = (x + y + z) * 2;
  cout << ans << endl;
}
