#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int sum = 0;
  for (int i = 0; i <= n; i ++) {
    int tmp = 0, x = i;
    while (x > 0) {
      tmp += x % 10;
      x /= 10;
    }
    if (tmp >= a && tmp <= b) {
      sum += i;
    }
  }

  cout << sum << endl;
}
