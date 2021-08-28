#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  if (b - a <= 0) {
    cout << "delicious" << endl;
  } else if (x >= b - a && b - a > 0) {
    cout << "safe" << endl;
  } else {
    cout << "dangerous" << endl;
  }
}
