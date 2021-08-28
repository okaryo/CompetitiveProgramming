#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int x = max(a, c);
  int y = min(b, d);
  cout << max(0, y - x) << endl;
}
