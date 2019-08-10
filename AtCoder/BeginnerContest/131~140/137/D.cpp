#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, m;
  cin >> n >> m;
  vector<pair<LL, LL>> a(n);
  rep(i, n) {
    cin >> a[i].first >> a[i].second;
  }

  sort(all(a));
  priority_queue<LL> pq;
  LL ans = 0, x = 0;
  for (int i = m - 1; i >= 0; i --) {
    while (x < n) {
      if (i + a[x].first <= m) {
        pq.push(a[x].second);
        x ++;
      } else {
        break;
      }
    }
    if (!pq.empty()) {
      ans += pq.top();
      pq.pop();
    }
  }
  
  cout << ans << endl;
}
