#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  if (n <= 5) {
    cout << n * b << endl;
  } else {
    cout << 5 * b + (n - 5) * a << endl;
  }
}
