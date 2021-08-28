#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, h;
  cin >> n >> h;
  int maxa = 0, a;
  vector<int> b(n);
  for (int i = 0; i < n; i ++) {
    cin >> a >> b[i];
    maxa = max(maxa, a);
  }

  sort(b.begin(), b.end());
  int ans = 0;
  while (h > 0 && !b.empty()) {
    int x = b.back();
    b.pop_back();
    if (x <= maxa) break;

    ans ++;
    h -= x;
  }
  if (h > 0) ans += ceil((double)h / maxa);

  cout << ans << endl;
}