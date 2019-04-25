#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;

  string ans;
  if (n == 1) ans = "Not Prime";
  else if (n == 2 || n == 3 || n == 5) ans = "Prime";
  else if (n%2 == 0 || n%3 == 0 || n%5 == 0) ans = "Not Prime";
  else ans = "Prime";

  cout << ans << endl;
}
