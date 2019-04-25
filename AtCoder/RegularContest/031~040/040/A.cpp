#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int r = 0, b = 0, d = 0;
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < n; j ++) {
      char t; cin >> t;
      if (t == 'R') r ++;
      else if (t == 'B') b ++;
      else d ++;
    }
  }

  string ans;
  if (r > b) ans = "TAKAHASHI";
  else if (r < b) ans = "AOKI";
  else ans = "DRAW";

  cout << ans << endl;
}
