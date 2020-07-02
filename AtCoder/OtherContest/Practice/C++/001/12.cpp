#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL h, w, k;
  cin >> h >> w >> k;
  vector<int> r(h, w);
  vector<int> c(w, h);
  for (int i = 0; i < k; i ++) {
    int x, y;
    cin >> x >> y;
    x --, y --;
    r[x] --, c[y] --;
  }

  LL sum = h * w - k;
  LL sum_r = 0, mid_r;
  for (int i = 0; i < h; i ++) {
    sum_r += r[i];
    if (sum_r > sum / 2) {
      mid_r = i;
      break;
    }
  }
  LL sum_c = 0, mid_c;
  for (int i = 0; i < w; i ++) {
    sum_c += c[i];
    if (sum_c > sum / 2) {
      mid_c = i;
      break;
    }
  }

  LL ans = 0;
  for (int i = 0; i < h; i ++) {
    ans += abs(i - mid_r) * r[i];
  }
  for (int i = 0; i < w; i ++) {
    ans += abs(i - mid_c) * c[i];
  }

  cout << ans << endl;
}