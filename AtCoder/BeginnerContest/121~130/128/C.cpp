#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(m);
  for (int i = 0; i < m; i ++) {
    int k; cin >> k;
    for (int j = 0; j < k; j ++) {
      int t; cin >> t;
      t --;
      a[i].push_back(t);
    }
  }
  vector<int> p(m);
  for (int i = 0; i < m; i ++) cin >> p[i];

  LL ans = 0;
  for (int i = 0; i < (1 << n); i ++) {
    bool flag = true;
    for (int j = 0; j < m; j ++) {
      int sum = 0;
      for (int k = 0; k < a[j].size(); k ++) {
        if (i & (1 << a[j][k])) sum ++;
      }
      if (sum % 2 != p[j]) flag = false;
    }
    if (flag) ans ++;
  }

  cout << ans << endl;
}
