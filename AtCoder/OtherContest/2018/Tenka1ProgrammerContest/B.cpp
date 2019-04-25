#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;

  int i = 0;
  while (i < k) {
    if (a % 2 == 1) a --;
    b += a / 2;
    a /= 2;
    i ++;

    if (i == k) break;
    if (b % 2 == 1) b --;
    a += b / 2;
    b /= 2;
    i ++;
  }

  cout << a << " " << b << endl;
}
