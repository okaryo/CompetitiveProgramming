#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  double c = b - a;

  if (abs(c) <= 5){
    cout << abs(c) << endl;
  } else {
    cout << 10 - abs(c) << endl;
  }
}
