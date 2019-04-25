#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  int m = abs(x - a);
  int n = abs(x - b);
  if (m > n) {
    cout << "B" << endl;
  } else {
    cout << "A" << endl;
  }
}
