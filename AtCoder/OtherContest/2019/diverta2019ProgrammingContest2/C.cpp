#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];
  sort(a.begin(), a.end());
  vector<int> x, y;
  int maxv = a.back(), minv = a.front();
  for (int i = 1; i < n - 1; i ++) {
    if (a[i] >= 0) {
      x.push_back(minv);
      y.push_back(a[i]);
      minv -= a[i];
    } else {
      x.push_back(maxv);
      y.push_back(a[i]);
      maxv -= a[i];
    }
  }
  x.push_back(maxv);
  y.push_back(minv);

  cout << maxv - minv << endl;
  for (int i = 0; i < x.size(); i ++) {
    cout << x[i] << " " << y[i] << endl;
  }
}