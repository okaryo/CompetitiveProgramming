#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int h, w, d;
  cin >> h >> w >> d;
  vector<pair<int, int>> a(h * w + 1);
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      int t; cin >> t;
      a[t] = make_pair(i, j);
    }
  }

  vector<int> b(h * w + 1, 0);
  for (int i = d + 1; i <= h * w; i ++) {
    b[i] = b[i - d] + abs(a[i].first - a[i - d].first) + abs(a[i].second - a[i - d].second);
  }

  int q, l, r;
  cin >> q;
  for (int i = 0; i < q; i ++) {
    cin >> l >> r;
    cout << b[r] - b[l] << endl;
  }
}
