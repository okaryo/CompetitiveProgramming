#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int ans;
  if (a == b) ans = a * 2;
  else ans = max(a, b) * 2 - 1;

  cout << ans << endl;
}