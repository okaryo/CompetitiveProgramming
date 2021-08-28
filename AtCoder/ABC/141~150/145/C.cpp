#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<double> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  LL x = 1;
  for (int i = n - 2; i >= 1; i --) x *= i;

  double sum = 0;
  for (int i = 0; i < n; i ++) {
    for (int j = i + 1; j < n; j ++) {
      double t = (a[i] - a[j]) * (a[i] - a[j]) + (b[i] - b[j]) * (b[i] - b[j]);
      sum += sqrt(t) * (n - 1) * 2 * x;
    }
  }

  for (int i = 1; i <= n; i ++) {
    sum /= i;
  }

  cout << setprecision(15) << sum << endl;
}