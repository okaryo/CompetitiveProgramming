#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b;
  c = a + b;

  if (c >= 24) {
    cout << c - 24 << endl;
  } else {
    cout << c << endl;
  }
}
