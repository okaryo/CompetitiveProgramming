#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(all(a));

  LL ans = 0;
  for (int i = n - 1; i >= 0; i --) {
    for (int j = i - 1; j >= 0; j --) {
      int x = lower_bound(a.begin(), a.end(), a[i] + a[j]) - a.begin();
      ans += x - i - 1;
    }
  }

  cout << ans << endl;
}