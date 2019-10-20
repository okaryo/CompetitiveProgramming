#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;

  int a = y / 10000;
  int b = y / 5000;
  int c = y / 1000;
  for (int i = 0; i <= a; i ++) {
    for (int j = 0; j <= b; j ++) {
      if (10000 * i + 5000 * j + 1000 * (n - i - j) == y && n - i - j >= 0) {
        cout << i << " " << j << " " << n - i - j << endl;
        return 0;
      }
    }
  }

  cout << -1 << " " << -1 << " " << -1 << endl;
}
