#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];
  
  int ans = 1;
  int d = 0;
  for (int i = 0; i < n; i ++) {
    d = d + a[i];
    if (d <= x) ans ++;
  }
  cout << ans << endl;
}