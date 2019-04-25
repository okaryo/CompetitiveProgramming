#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int x = a + b;
  int y = a - b;

  if (c == x && c == y) {
    cout << "?" << endl;
  } else if (c == x) {
    cout << "+" << endl;
  } else if (c == y) {
    cout << "-" << endl;
  } else {
    cout << "!" << endl;
  }
}
