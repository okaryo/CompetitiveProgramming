#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const int mod = 1e9 + 7;

int main() {
  int n; cin >> n;
  vector<pair<int, int>> a;
  pair<int, int> p;
  rep(i, n) {
    int t; cin >> t;
    p.first = t;
    p.second = 0;
    a.push_back(p);
  }
  rep(i, n) {
    int t; cin >> t;
    p.first = t;
    p.second = 1;
    a.push_back(p);
  }

  sort(all(a));

  LL ans = 1;
  stack<int> x, y;
  rep(i, 2 * n) {
    if (a[i].second == 0) {
      if (y.empty()) {
        x.push(a[i].first);
      } else {
        ans *= y.size();
        ans %= mod;
        y.pop();
      }
    } else {
      if (x.empty()) {
        y.push(a[i].first);
      } else {
        ans *= x.size();
        ans %= mod;
        x.pop();
      }
    }
  }

  cout << ans << endl;
}