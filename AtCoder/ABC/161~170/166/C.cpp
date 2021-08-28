#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  vector<bool> cnt(n, true);

  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a --, b --;
    if (h[a] >= h[b]) cnt[b] = false;
    if (h[b] >= h[a]) cnt[a] = false;
  }

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    if (cnt[i]) ans ++;
  }

  cout << ans << endl;
}
