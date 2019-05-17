#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 1;
  while (ans <= n / 2) {
    ans *= 2;
  }
  cout << ans << endl;
}
