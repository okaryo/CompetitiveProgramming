#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  int tmp_cnt = 1;
  LL x = 0;
  LL ans = 0;
  for (int i = 1; i < n; i ++) {
    if (a.at(i) == a.at(i - 1) && i == n - 1) {
      tmp_cnt ++;
      if (tmp_cnt >= 2 && x > 0) {
        ans = x * a.at(i);
      } else if (tmp_cnt >= 4) {
        ans = a.at(i) * a.at(i);
      }
    } else if (a.at(i) == a.at(i - 1)) {
      tmp_cnt ++;
    } else {
      if (tmp_cnt >= 2 && x > 0) {
        ans = x * a.at(i - 1);
        break;
      } else if (tmp_cnt >= 4) {
        ans = a.at(i - 1) * a.at(i - 1);
        break;
      } else if (tmp_cnt >= 2) {
        x = a.at(i - 1);
      }
      tmp_cnt = 1;
    }
  }

  cout << ans << endl;
}
