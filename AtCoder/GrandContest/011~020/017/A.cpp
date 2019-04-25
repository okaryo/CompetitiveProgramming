#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, p;
  bool isOdd = false;
  cin >> n >> p;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    if (a.at(i) % 2 == 1) {
      isOdd = true;
    }
  }

  LL ans;
  if (!isOdd && p == 0) {
    ans = pow(2, n);
  } else if (!isOdd && p == 1) {
    ans = 0;
  } else {
    ans = pow(2, n - 1);
  }

  cout << ans << endl;
}
