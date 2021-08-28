#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;

  LL ans = 0;
  int n = s.size();
  for (int i = 0; i < n; i ++) {
    if (i == 0 || i == n - 1) ans += n - 1;
    else if (s[i] == 'U') ans += 2 * i + (n - i - 1);
    else if (s[i] == 'D') ans += 2 * (n - i - 1) + i;
  }

  cout << ans << endl;
}