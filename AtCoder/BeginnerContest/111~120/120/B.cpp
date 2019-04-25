#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;

  int cnt = 0, ans;
  for (int i = min(a, b); i >= 1; i --) {
    if (a % i == 0 && b % i == 0) cnt ++;

    if (cnt == k) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;
}
