#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<double> a(n);
  rep(i, n) cin >> a[i];

  sort(all(a));
  double tmp;
  for (int i = 1; i < n; i ++) {
    tmp = (a[i] + a[i - 1]) / 2;
    a[i] = tmp;
  }
  cout << setprecision(15) << a[n - 1] << endl;
}