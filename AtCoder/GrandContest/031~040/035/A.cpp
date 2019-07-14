#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n; cin >> n;

  bool zero = false, all_zero = true;
  vector<LL> a(n);
  map<int, int> mp;
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    mp[a[i]] ++;
    if (a[i] == 0) zero = true;
    else all_zero = false;
  }

  if (all_zero) {
    cout << "Yes" << endl;
    return 0;
  }


  cout << ans << endl;
}