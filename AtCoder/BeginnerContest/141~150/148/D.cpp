#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;
  int num = 1;
  for (int i = 0; i < n; i ++) {
    if (a[i] == num) {
      num ++;
    } else {
      ans ++;
    }
  }

  if (ans == n) ans = -1;
  cout << ans << endl;
}
