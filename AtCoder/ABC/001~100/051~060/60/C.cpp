#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, t;
  cin >> n >> t;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  LL sum = 0;
  for (int i = 1; i < n; i ++) {
    if (a.at(i) - a.at(i - 1) <= t) {
      sum += a.at(i) - a.at(i - 1);
    } else {
      sum += t;
    }
  }
  sum += t;

  cout << sum << endl;
}
