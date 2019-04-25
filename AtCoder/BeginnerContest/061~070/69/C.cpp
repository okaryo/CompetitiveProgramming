#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int four = 0, two = 0, other = 0;
  for (int i = 0; i < n; i ++) {
    int t; cin >> t;
    if (t % 4 == 0) four ++;
    else if (t % 2 == 0) two ++;
    else other ++;
  }

  string ans;
  if (four+1 == other && four+other == n) ans = "Yes";
  else if (four >= other) ans = "Yes";
  else ans = "No";

  cout << ans << endl;
}
