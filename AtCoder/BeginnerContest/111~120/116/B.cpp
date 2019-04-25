#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 1, tmp = n;
  array<int, 1000005> a = {0};
  a[n] ++;
  while (true) {
    i ++;
    if (tmp % 2 == 0) {
      tmp /= 2;
      if (a[tmp] > 0) break;
      else a[tmp] ++;
    } else {
      tmp = 3 * tmp + 1;
      if (a[tmp] > 0) break;
      else a[tmp] ++;
    }
  }
  int ans = i;

  cout << ans << endl;
}
