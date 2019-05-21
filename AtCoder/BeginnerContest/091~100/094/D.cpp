#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  sort(a.begin(), a.end());
  int x = a.back();
  int r = a[0], t = (x + 1) / 2;
  for (int i = 0; i < n - 1; i ++) {
    if (abs(a[i] - t) < abs(r - t)) r = a[i];
  }
  cout << x << " " << r << endl;
}
