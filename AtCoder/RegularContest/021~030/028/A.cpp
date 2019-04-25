#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int m = n % (a+b) - a;
  string ans;
  if (m <= 0 && m != -a) ans = "Ant";
  else ans = "Bug";

  cout << ans << endl;
}
