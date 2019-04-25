#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<LL> a(n);
  vector<LL> b(n);
  for (int i = 0; i < n; i ++) cin >> a.at(i);
  for (int i = 0; i < n; i ++) cin >> b.at(i);

  int cnt = 0;
  LL sum_rem = 0;
  LL sum_short = 0;
  pair<LL, LL> rem[n];
  for (int i = 0; i < n; i ++) {
    if (a.at(i) - b.at(i) < 0) {
      cnt ++;
      sum_short += b.at(i) - a.at(i);
    } else {
      rem[i].first = a.at(i) - b.at(i);
      rem[i].second = i;
      sum_rem += a.at(i) - b.at(i);
    }
  }

  if (sum_short > sum_rem) {
    cout << "-1" << endl;
    return 0;
  } else {
    sort(rem, rem + n);
    reverse(rem, rem + n);
    int i = 0;
    while (sum_short > 0) {
      sum_short -= rem[i].first;
      i ++;
      cnt ++;
    }
  }

  cout << cnt << endl;
}
