#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;
  int t = 0;
  for (int i = n - 1; i >= 1; i --) {
    if (a[i] <= a[i - 1]) {
      t ++;
    } else if (a[i] > a[i - 1]) {
      ans = max(ans, t);
      t = 0;
    }
  }
  ans = max(ans, t);

  cout << ans << endl;
}