#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m;
  cin >> n >> m;
  pair<int, int> p[m];
  rep(i, m) cin >> p[i].second >> p[i].first;

  sort(p, p + m);
  int ans = 0;
  int break_index = -1;
  rep(i, m) {
    if (p[i].second <= break_index && break_index < p[i].first) continue;
    else {
      ans ++;
      break_index = p[i].first - 1;
    }
  }
  cout << ans << endl;
}