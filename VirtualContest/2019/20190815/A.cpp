#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  pair<LL, LL> p[n];
  rep(i, n) cin >> p[i].second >> p[i].first;

  sort(p, p + n);
  LL now = 0;
  string ans = "Yes";
  rep(i, n) {
    now += p[i].second;
    if (p[i].first < now) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
}