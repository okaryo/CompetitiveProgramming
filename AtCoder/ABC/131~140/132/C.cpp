#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];
  sort(a.begin(), a.end());

  int x = n / 2;
  if (a[x] == a[x - 1]) cout << 0 << endl;
  else cout << a[x] - a[x - 1] << endl;
}