#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s; cin >> s;

  int n = s.size() - 1;
  int left = 0, right = n;
  int ans = 0;
  bool flag = true;
  while (left <= right) {
    if (s[left] == s[right]) {
      left ++, right --;
    } else if (s[left] == 'x') {
      left ++, ans ++;
    } else if (s[right] == 'x') {
      right --, ans ++;
    } else {
      flag = false;
      break;
    }
  }

  if (flag) cout << ans << endl;
  else cout << -1 << endl;
}