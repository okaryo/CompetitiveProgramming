#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n; cin >> n;
  vector<LL> a(n);
  map<LL, LL> mp;
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    mp[a[i]] ++;
  }

  LL sum = 0;
  for (auto x: mp) {
    if (x.second >= 2) {
      sum += x.second * (x.second - 1) / 2;
    }
  }

  for (int i = 0; i < n; i ++) {
    cout << sum - (mp[a[i]] - 1) << endl;
  }
}
