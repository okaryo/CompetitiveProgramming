#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

const int mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  string s1, s2;
  cin >> s1 >> s2;

  LL ans, t;
  if (s1[0] == s2[0]) ans = 3, t = 1;
  else ans = 6, t = 2;

  for (int i = t; i < n; i ++) {
    if ((s1[i - 1] == s2[i - 1]) && (s1[i] == s2[i])) {
      ans *= 2;
    } else if ((s1[i - 1] == s2[i - 1]) && (s1[i] != s2[i])) {
      ans *= 2, i ++;
    } else if ((s1[i - 1] != s2[i - 1]) && (s1[i] == s2[i])) {
      ans *= 1;
    } else if ((s1[i - 1] != s2[i - 1]) && (s1[i] != s2[i])) {
      ans *= 3, i ++;
    }
    ans %= mod;
  }

  cout << ans << endl;
}