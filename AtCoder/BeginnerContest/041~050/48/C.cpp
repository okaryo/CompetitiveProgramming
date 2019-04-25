#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  LL ans = 0;
  for (int i = 1; i < n; i ++) {
    int tmp = a.at(i) + a.at(i - 1);
    if (tmp > x) {
      int def = tmp - x;
      ans += def;
      if (def > a.at(i)) {
        a.at(i) = 0;
      } else {
        a.at(i) -= def;
      }
    }
  }

  cout << ans << endl;
}
