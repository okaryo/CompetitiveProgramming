#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m;
  cin >> n >> m;
  bool flag = false;
  string ans = "";
  for (int i = 0; i < n; i ++) ans += '0';
  if (n != 1) ans[0] = '1';
  for (int i = 0; i < m; i ++) {
    int s;
    char c;
    cin >> s >> c;
    s --;
    if (s == 0) {
      if (ans[s] != c && flag) {
        cout << -1 << endl;
        return 0;
      } else if (ans[s] == c) {
        continue;
      } else {
        ans[s] = c;
        flag = true;
      }
    }
    if (ans[s] != c && ans[s] != '0') {
      cout << -1 << endl;
      return 0;
    }

    ans[s] = c;
  }

  if (n == 1 && ans == "0") {
    cout << 0 << endl;
    return 0;
  }

  for (int i = 0; i < n; i ++) {
    if (ans[i] != '0') break;
    else {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << ans << endl;
}
