#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s; cin >> s;
  int n = s.size();

  int ans = 0;
  int now_min = s[0] - 'a';
  for (int i = 0; i < n; i ++) {
    if (s[i] - 'a' <= now_min) {
      ans ++;
      now_min = s[i] - 'a';
    }
  }

  cout << ans << endl;
}