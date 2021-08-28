#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<LL> b(n - 1);
  LL sum = 0;
  rep(i, n - 1) {
    cin >> b[i];
  }
  
  vector<LL> a(n, 0);
  a[0] = b[0];
  for (int i = 1; i < n - 1; i ++) {
    a[i] = min(b[i-1], b[i]);
  }
  a[n - 1] = b[n - 2];
  rep(i, n) sum += a[i];

  cout << sum << endl;
}