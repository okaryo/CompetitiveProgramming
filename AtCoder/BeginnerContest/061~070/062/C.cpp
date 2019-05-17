#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL solve(LL H, LL W) {
  LL a, b, c, ans1, ans2, h, w, maxs, mins;
  a = b = c = 10000000000;
  ans1 = ans2 = 10000000000;
  w = W / 2;
  for (LL i = 1; i <= H/2 + 1; i ++) {
    a = i * W;
    h = (H - i) / 2;
    b = h * W;
    c = (H - i - h) * W;
    maxs = max(a, max(b, c));
    mins = min(a, min(b, c));
    ans1 = min(ans1, maxs - mins);
  }

  for (LL i = 1; i <= H/2 + 1; i ++) {
    a = i * W;
    b = (H - i) * w;
    c = (H - i) * (W - w);
    maxs = max(a, max(b, c));
    mins = min(a, min(b, c));
    ans2 = min(ans2, maxs - mins);
  }

  return min(ans1, ans2);
}

int main() {
  LL h, w;
  cin >> h >> w;

  cout << min(solve(h, w), solve(w, h)) << endl;
}
