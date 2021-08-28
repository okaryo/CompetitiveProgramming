#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  int a[27];
  for (int i = 0; i < 27; i ++) a[i] = 0;
  for (int i = 0; i < n; i ++) {
    char t; cin >> t;
    a[t - 'a'] ++;
  }

  long long ans = 1;
  for (int i = 0; i < 27; i ++) {
    ans *= (a[i] + 1);
    ans %= mod;
  }

  cout << ans - 1 << endl;
}