#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int x = a % 3;
  int y = b % 3;
  int z = (a + b) % 3;

  if (x == 0 || y == 0 || z == 0) {
    cout << "Possible" << endl;
  } else {
    cout << "Impossible" << endl;
  }
}
