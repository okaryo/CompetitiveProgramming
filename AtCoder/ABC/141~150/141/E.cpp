#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n; cin >> n;
  string s; cin >> s;

  LL ans = 0;
  for (int i = 0; i < n / 2; i ++) {
    for (LL a = 1; a <= n / 2; a ++) {
      for (int j = i + a; j + a <= n; j ++) {
        if (s.substr(i, a) == s.substr(j, a)) {
          ans = max(ans, a);
        }
      }
    }
  }

  cout << ans << endl;
}