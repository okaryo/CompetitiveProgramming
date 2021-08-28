#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  int ans = 0;
  if (n > 9) {
    ans += 9;
    if (n > 999) {
      ans += 900;
      if (n > 99999) {
        ans += 90000;
      } else {
        ans += max(0, n - 9999);
      }
    } else {
      ans += max(0, n - 99);
    }
  } else {
    ans = n;
  }
  cout << ans << endl;
}