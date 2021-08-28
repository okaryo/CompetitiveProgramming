#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();

  LL cnt = 0, ans = 0;
  for (int i = 0; i < n; i ++) {
    if (s[i] == 'A') cnt ++;
    else if (i < n - 1 && s[i] == 'B' && s[i + 1] == 'C') {
      ans += cnt;
      i ++;
    } else {
      cnt = 0;
    }
  }

  cout << ans << endl;
}