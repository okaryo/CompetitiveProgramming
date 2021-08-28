#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const int INF = 1e7;

int main() {
  n, m; cin >> n >> m;
  vector<int> a(m), b(m), c(m);
  rep(i, m) {
    cin >> a[i] >> b[i];
    rep(j, b[i]) {
      int t; cin >> t;
      c[i].push_back(t);
    }
  }

  int ans = INF;

  if (ans == INF) ans = -1;
  cout << ans << endl;
}