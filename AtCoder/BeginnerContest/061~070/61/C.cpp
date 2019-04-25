#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, k;
  cin >> n >> k;
  vector<LL> a(n);
  vector<LL> b(n);
  pair<LL, LL> c[n];
  for (LL i = 0; i < n; i ++) {
    cin >> a.at(i) >> b.at(i);
    c[i] = make_pair(a.at(i), b.at(i));
  }

  sort(c, c + n);
  LL sum = 0;
  for (LL i = 0; i < n; i ++) {
    sum += c[i].second;
    if (sum >= k) {
      cout << c[i].first << endl;
      return 0;
    }
  }
}
