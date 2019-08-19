#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  LL ans = 0, sum = 0;
  rep(i, n) {
    if (a[i] == 0) {
      ans += sum / 2;
      sum = 0;
    } else {
      sum += a[i];
    }
  }
  ans += sum / 2;

  cout << ans << endl;
}