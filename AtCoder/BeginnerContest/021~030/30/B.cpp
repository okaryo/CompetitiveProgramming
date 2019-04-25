#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  double a = (n % 12) * 30 + m * 0.5;
  double b = m * 6;
  double ans = abs(a - b);
  cout << min(ans, 360 - ans) << endl;
}
