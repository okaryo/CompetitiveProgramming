#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0, cnt = 0;
  for (int i = 0; i < n; i ++) {
    int t; cin >> t;
    t --;
    if (t == i) cnt ++;
    else if (cnt % 2 == 1) ans += cnt / 2 + 1, cnt = 0;
    else if (cnt % 2 == 0) ans += cnt / 2, cnt = 0;
  }
  if (cnt % 2 == 1) ans += cnt / 2 + 1;
  else if (cnt % 2 == 0) ans += cnt / 2;

  cout << ans << endl;
}