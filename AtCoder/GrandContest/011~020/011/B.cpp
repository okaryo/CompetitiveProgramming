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

  LL sum = a[0];
  int ans = n;
  for (int i = 1; i < n; i ++) {
    if (sum * 2 < a[i]) ans = n - i;
    sum += a[i];
  }

  cout << ans << endl;
}