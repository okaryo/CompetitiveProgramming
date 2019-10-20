#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i ++) cin >> a[i];
  for (int i = 0; i < m; i ++) cin >> b[i];

  long long cnt = 0;
  int ai = 0, bi = 0, nowp = 1, nowt = 0;
  while (true) {
    if ((ai >= n && nowp) || (bi >= m && !nowp)) break;

    if (nowp) {
      for (; ai < n; ai ++) {
        if (nowt <= a[ai]) {
          nowt = a[ai] + x;
          nowp = 0;
          cnt ++;
          ai ++;
          break;
        }
      }
    } else {
      for (; bi < m; bi ++) {
        if (nowt <= b[bi]) {
          nowt = b[bi] + y;
          nowp = 1;
          cnt ++;
          bi ++;
          break;
        }
      }
    }
  }

  cout << cnt / 2 << endl;
}
