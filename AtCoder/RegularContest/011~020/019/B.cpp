#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < s.size() / 2; i ++) {
    if (s[i] != s[s.size() - 1 - i]) cnt ++;
  }
  LL ans = 25 * s.size();
  if (cnt == 1) ans -= 2;
  if (cnt == 0 && s.size() % 2 == 1) ans -= 25;
  cout << ans << endl;
}