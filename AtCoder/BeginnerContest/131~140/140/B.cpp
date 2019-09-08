#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n - 1);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n-1) cin >> c[i];

  LL sum = 0;
  rep(i, n) sum += b[i];

  for (int i = 0; i < n - 1; i ++) {
    if (a[i] + 1 == a[i + 1]) {
      sum += c[a[i] - 1];
    }
  }
  cout << sum << endl;
}