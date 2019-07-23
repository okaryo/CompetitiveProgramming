#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL s; cin >> s;
  LL x = 0, y = 0;
  LL x1 = 1e9, y1 = 1;
  LL x2, y2;

  x2 = (x1 - (s % x1)) % x1;
  y2 = (s + x2) / 1e9;

  cout << x << " " << y << " " << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
}