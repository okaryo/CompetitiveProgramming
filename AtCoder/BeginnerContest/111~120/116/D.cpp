#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k;
  cin >> n >> k;
  vector<pair<LL, LL>> a(n); // <美味しさ, ネタ>
  map<LL, LL> mp;
  priority_queue<pair<LL, LL>, vector<pair<LL, LL>>, greater<pair<LL, LL>>> PQ;
  rep(i, n) cin >> a[i].second >> a[i].first;

  sort(all(a));
  reverse(all(a));

  LL sum = 0;
  for (int i = 0; i < k; i ++) {
    mp[a[i].second] ++;
    if (mp[a[i].second] > 1) PQ.push(make_pair(a[i].first, a[i].second));
    sum += a[i].first;
  }
  
  LL ans = sum + (mp.size() * mp.size());
  pair<LL, LL> t;
  for (int i = k; i < n; i ++) {
    if (!PQ.empty() && mp.find(a[i].second) == mp.end()) {
      t = PQ.top(); PQ.pop();
      mp[a[i].second] ++;
      sum -= t.first;
      sum += a[i].first;
      ans = max(ans, sum + (LL)(mp.size() * mp.size()));
    }
  }

  cout << ans << endl;
}
