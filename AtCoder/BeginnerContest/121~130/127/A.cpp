#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans;
  if (a >= 13) ans = b;
  else if (a <= 12 && a>= 6) ans = b / 2;
  else if (a <= 5) ans = 0;
  cout << ans << endl;
}
