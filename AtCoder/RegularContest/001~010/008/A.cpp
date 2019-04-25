#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int r;
  if (n%10 >= 7) r = 100;
  else r = (n % 10) * 15;
  int ans = (n / 10) * 100 + r;

  cout << ans << endl;
}
