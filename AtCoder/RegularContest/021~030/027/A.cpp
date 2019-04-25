#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int ans = (17 - a) * 60 + (60 - b);

  cout << ans << endl;
}
