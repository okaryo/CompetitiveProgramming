#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a = n / 8;
  int x = n % 8;
  int b = x / 4;
  int y = x % 4;
  int c = y / 2;
  int z = x % 2;
  int d = z / 1;
  int count = a + b + c + d;

  cout << count << endl;
  while (d > 0) {
    cout << 1 << endl;
    d --;
  }
  while (c > 0) {
    cout << 2 << endl;
    c --;
  }
  while (b > 0) {
    cout << 4 << endl;
    b --;
  }
  while (a > 0) {
    cout << 8 << endl;
    a --;
  }
}
