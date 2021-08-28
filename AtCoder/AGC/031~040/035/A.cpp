#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n; cin >> n;

  bool zero = false, all_zero = true;
  vector<LL> a(n);
  map<int, int> mp;
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    mp[a[i]] ++;
    if (a[i] == 0) zero = true;
    else all_zero = false;
  }

  if (all_zero) {
    cout << "Yes" << endl;
    return 0;
  }

  bool flag = false;
  if (n % 3 == 0) {
    int t = n / 3;
    if (zero) {
      int x = -1;
      rep(i, n) {
        if (a[i] != 0) x = a[i];
      }
      if (mp[x] == t * 2 && mp[0] == t) flag = true;
    } else {
      for (int i = 1; i < n; i ++) {
        if (a[i] != a[0]) {
          int x = a[0], y = a[i], z = x ^ y;
          if (mp.count(z)) {
            if (mp[x] == t && mp[y] == t && mp[z] == t) flag = true;
          }
        }
      }
    }
  }


  cout << (flag ? "Yes" : "No") << endl;
}