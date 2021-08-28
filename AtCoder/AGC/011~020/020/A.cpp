#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int c = b - a;

  string ans;
  if (c % 2 == 0) {
    ans = "Alice";
  } else {
    ans = "Borys";
  }

  cout << ans << endl;
}
