#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int a = x / 10;
  int b = x % (a * 10);

  cout << a + b << endl;
}
