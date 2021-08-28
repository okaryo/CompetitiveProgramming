#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k; cin >> n >> k;
  int ans = 0;
  rep(i, n) {
    int t; cin >> t;
    if (t >= k) ans ++;
  }

  cout << ans << endl;
}