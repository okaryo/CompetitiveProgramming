#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> ab(n);
  rep(i, n) cin >> ab[i].first >> ab[i].second;

  sort(all(ab));
  priority_queue<int> pq;
  int ans = 0;
  int index = 0;
  for (int i = m - 1; i >= 0; i --) {
    while (ab[index].first <= m - i) {
      pq.push(ab[index].second);
      index ++;
    }
    if (!pq.empty()) {
      ans += pq.top();
      pq.pop();
    }
  }

  cout << ans << endl;
}