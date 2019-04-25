#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL a, b, c;
  cin >> a >> b >> c;

  LL d = a * b * c;
  if (d % 2 == 0) {
    cout << 0 << endl;
  } else {
    LL e = min(a * b, min(b * c, c * a));
    cout << e << endl;
  }
}
