#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, n;
  cin >> d >> n;

  int x = 0, y = 0;
  if (n == 100) {
    n = 101;
  }
  
  if (d == 0) {
    y = n;
  } else {
    //pow(x, y)でxのy乗が計算できる
    x = pow(100, d);
    y = x * n;
  }

  cout << y << endl;
}
