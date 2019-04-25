#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;

  string ans;
  if (n % 400 == 0) ans = "YES";
  else if (n % 100 == 0) ans = "NO";
  else if (n % 4 == 0) ans = "YES";
  else ans = "NO";

  cout << ans << endl;
}
