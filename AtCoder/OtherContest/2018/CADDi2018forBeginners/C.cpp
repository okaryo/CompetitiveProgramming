#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, p;
  cin >> n >> p;

  vector<pair<LL, LL>> a;
  LL tmp = p;
  for (LL i = 2; i * i <= p; i ++) {
    if (tmp % i != 0) continue;
    LL cnt = 0;
    while (tmp % i == 0) {
      cnt ++;
      tmp /= i;
    }
    a.push_back(make_pair(i, cnt));
  }
  if (tmp > 1) a.push_back(make_pair(tmp, 1));

  LL ans = 1;
  for (int i = 0; i < a.size(); i ++) {
    for (int j = 0; j < a[i].second / n; j ++) ans *= a[i].first;
  }
  cout << ans << endl;
}