#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  int x = a.size();
  int y = b.size();
  if (x >= y) {
    cout << a << endl;
  } else {
    cout << b << endl;
  }
}
