#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n, m;
  cin >> t >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a.at(i);
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i ++) cin >> b.at(i);

  string ans = "yes";
  if (n < m) {
    ans = "no";
  } else {
    int j = 0;
    for (int i = 0; i < m; i ++) {
      while(true) {
        if (j > n) {
          ans = "no";
          break;
        }
        if (a[j] <= b[i] && b[i] <= a[j]+t) {
          j ++;
          break;
        }
        j ++;
      }
    }
  }

  cout << ans << endl;
}
