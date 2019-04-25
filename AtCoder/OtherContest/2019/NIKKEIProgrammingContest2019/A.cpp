#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int x = min(a, b);
  int y = max(0, a + b - n);

  cout << x << " " << y << endl;
}
