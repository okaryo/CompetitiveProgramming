#include <bits/stdc++.h>
using namespace std;

int main() {
  char a, b;
  cin >> a >> b;

  if (a == 'H') {
    cout << b << endl;
  } else if (a == 'D' && b == 'H') {
    cout << 'D' << endl;
  } else {
    cout << 'H' << endl;
  }
}
