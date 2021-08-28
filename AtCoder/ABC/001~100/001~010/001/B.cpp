#include <bits/stdc++.h>
using namespace std;

int main() {
  double m;
  cin >> m;
  double n = m / 1000;

  if (n < 0.1) {
    cout << 0 << 0 << endl;
  } else if (n < 1) {
    cout << 0 << n * 10 << endl;
  } else if (n <= 5) {
    cout << n * 10 << endl;
  } else if (n <= 30) {
    cout << n + 50 << endl;
  } else if (n <= 70) {
    cout << ((n - 30) / 5) + 80 << endl;
  } else {
    cout << 89 << endl;
  }
}
