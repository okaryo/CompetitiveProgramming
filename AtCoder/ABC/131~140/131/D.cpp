#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  pair<LL, LL> p[n];
  for (int i = 0; i < n; i ++) cin >> p[i].second >> p[i].first;

  sort(p, p + n);
  LL sum = 0;
  string ans = "Yes";
  for (int i = 0; i < n; i ++) {
    sum += p[i].second;
    if (sum > p[i].first) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
}