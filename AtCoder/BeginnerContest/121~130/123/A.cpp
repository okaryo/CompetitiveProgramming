#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int a, b, c, d, e, k;
  cin >> a >> b >> c >> d >> e >> k;

  string ans = "Yay!";
  if (e - a > k) ans = ":(";

  cout << ans << endl;
}