#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, l;
  cin >> n >> l;
  vector<LL> a(n);
  LL sum = 0;
  rep(i, n) cin >> a[i];

  int t = -1;
  rep(i, n - 1) {
    if (a[i] + a[i + 1] >= l) t = i + 1;
  }
  if (t == -1) {
    cout << "Impossible" << endl;
    return 0;
  }

  cout << "Possible" << endl;
  for (int i = 1; i <= t - 1; i ++) {
    cout << i << endl;
  }
  for (int i = n - 1; i >= t; i --) {
    cout << i << endl;
  }
}