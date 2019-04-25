#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int x = a * b;
  int y = c * d;

  if (x >= y) {
    cout << x << endl;
  } else {
    cout << y << endl;
  }
}
