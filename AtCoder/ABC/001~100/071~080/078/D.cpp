#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, z, w;
  cin >> n >> z >> w;
  vector<LL> a(n);
  rep(i, n) cin >> a[i];

  if (n == 1) {
    cout << abs(a[0] - w) << endl;
  } else {
    cout << max(abs(a[n - 1] - w), abs(a[n - 2] - a[n - 1])) << endl;
  }
}