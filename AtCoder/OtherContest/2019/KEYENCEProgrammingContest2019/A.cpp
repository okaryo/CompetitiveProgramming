#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(4);
  for (int i = 0; i < 4; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  string ans;
  if (a[0] == 1 && a[1] == 4 && a[2] == 7 && a[3] == 9) ans = "YES";
  else ans = "NO";

  cout << ans << endl;
}
