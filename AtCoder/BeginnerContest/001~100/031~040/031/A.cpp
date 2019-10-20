#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, d;
  cin >> a >> d;
  int x = (a + 1) * d;
  int y = a * (d + 1);

  if (x >= y) {
    cout << x << endl;
  } else {
    cout << y << endl;
  }
}
