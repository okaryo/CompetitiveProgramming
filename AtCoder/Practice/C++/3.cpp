#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  int sum = a + b + c + d + e + f;
  sum -= min(a, min(b, min(c, d)));
  sum -= min(e, f);
  cout << sum << endl;
}