#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int n = s.size();

  char x[] = {'A', 'T', 'G', 'C'};
  int ans = 0, cnt = 0;
  for (int i = 0; i < n; i ++) {
    bool ok = false;
    for (int j = 0; j < 4; j ++) {
      if (s[i] == x[j]) ok = true;
    }

    if (ok) {
      cnt ++;
      ans = max(ans, cnt);
    } else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }

  cout << ans << endl;
}
