#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int d = a[0] + (k - a[n - 1]);
  for (int i = 1; i < n; i ++) {
    d = max(d, a[i] - a[i - 1]);
  }

  cout << k - d << endl;
}
