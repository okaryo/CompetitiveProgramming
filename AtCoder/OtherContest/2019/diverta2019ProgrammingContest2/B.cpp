#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  pair<LL, LL> p[n];
  for (int i = 0; i < n; i ++) cin >> p[i].first >> p[i].second;
  sort(p, p + n);

  LL cnt = 0;
  for (int i = 0; i < n; i ++) {
    for (int j = i + 1; j < n; j ++) {
      LL pv = p[i].first - p[j].first;
      LL qv = p[i].second - p[j].second;
      LL tmp = 1;
      for (int k = 0; k < n; k ++) {
        for (int l = 0; l < n; l ++) {
          if ((i == k && j == l) || (i == l && j == k) || (k == l)) continue;
          if (p[k].first == p[l].first - pv && p[k].second == p[l].second - qv) tmp ++;
        }
      }
      cnt = max(cnt, tmp);
    }
  }

  cout << n - cnt << endl;
}