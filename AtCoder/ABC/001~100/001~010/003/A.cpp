#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  int i = 1;
  int sum = 0;
  while (i <= x) {
    sum += 10000 * i;
    i ++;
  }

  int ans = sum / x;
  cout << ans << endl;
}
