#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n; cin >> n;
  vector<LL> a(n), b(n);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(a.begin(), a.end());
  LL maxv = a[n - 1];
  LL t = a[n - 2];

  for (int i = 0; i < n; i ++) {
    if (maxv != b[i]) cout << maxv << endl;
    else cout << t << endl;
  }
}