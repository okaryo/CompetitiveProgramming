#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k;
  cin >> n >> k;
  int r, s, p;
  cin >> r >> s >> p;
  string t;
  cin >> t;

  int ans = 0;
  string te = "";
  for (int i = 0; i < n; i ++) {
    if (t[i] == 'r') {
      if (i - k < 0 || (i - k >= 0 && te[i - k] != 'p')) {
        ans += p;
        te += 'p';
      } else {
        te += 'x';
      }
    } else if (t[i] == 's') {
      if (i - k < 0 || (i - k >= 0 && te[i - k] != 'r')) {
        ans += r;
        te += 'r';
      } else {
        te += 'x';
      }
    } else {
      if (i - k < 0 || (i - k >= 0 && te[i - k] != 's')) {
        ans += s;
        te += 's';
      } else {
        te += 'x';
      }
    }
  }

  cout << ans << endl;
}
