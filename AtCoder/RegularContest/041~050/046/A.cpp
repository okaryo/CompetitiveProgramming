#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int x = n / 9;
  if (n % 9 == 0) x --;
  int y = n - 9 * x;

  for (int i = 0; i <= x; i ++) {
    cout << y;
  }
  cout << endl;
}
