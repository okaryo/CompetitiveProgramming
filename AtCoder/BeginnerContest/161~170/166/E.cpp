#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  map<int, int> mp;
  LL ans = 0;
  for (int i = 0; i < n; i ++) {
    int a; cin >> a;
    ans += mp[i - a];
    mp[i + a] ++;
  }

  cout << ans << endl;
}
