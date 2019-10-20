#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int x = a / b;
  int y = (x + 1) * b;

  if (a % b == 0) {
    cout << 0 << endl;
  } else {
    cout << y - a << endl;
  }
}
