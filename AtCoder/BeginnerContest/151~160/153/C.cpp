#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  sort(all(h));
  LL ans = 0;
  for (int i = 0; i < max(0, n - k); i ++) ans += h[i];

  cout << ans << endl;
}
