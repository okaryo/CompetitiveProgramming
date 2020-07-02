#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
  }

  vector<bool> b(n, true);
  int on = 0;
  int cnt = 0;
  while(true) {
    cnt ++;
    if (a[on] == 2) {
      cout << cnt << endl;
      return 0;
    }
    if (b[on]) {
      b[on] = false;
      on = a[on] - 1;
    } else {
      cout << -1 << endl;
      return 0;
    }
  }
}
