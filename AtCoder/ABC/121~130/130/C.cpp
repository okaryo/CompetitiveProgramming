#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  double w, h, x, y;
  cin >> w >> h >> x >> y;
  cout << w * h / 2;
  cout << " ";
  if (x * 2 == w && y * 2 == h) cout << 1 << endl;
  else cout << 0 << endl;
}