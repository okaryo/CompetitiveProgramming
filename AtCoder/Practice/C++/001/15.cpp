#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, k;
  cin >> n >> k;
  priority_queue<pair<LL, LL>, vector<pair<LL, LL>>, greater<pair<LL, LL>>> pq;
  for (int i = 0; i < n; i ++) {
    LL a, b;
    cin >> a >> b;
    pq.push(make_pair(a, b));
  }

  LL ans = 0;
  pair<LL, LL> t;
  for (int i = 0; i < k; i ++) {
    t = pq.top();
    pq.pop();
    ans += t.first;
    t.first += t.second;
    pq.push(t);
  }

  cout << ans << endl;
}