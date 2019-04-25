#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL a, b, x;
  cin >> a >> b >>x;

  LL s, t, u;
  s = b / x;
  t = a / x;
  if (a % x == 0) {
    u = s - t + 1;
  } else {
    u = s - t;
  }

  cout << u << endl;
}
