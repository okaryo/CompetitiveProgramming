#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> t(n);
  for (int i = 0; i < n; i ++) cin >> t[i];
  sort(t.begin(), t.end());

  int sum1 = t[0] + t[1] + t[2];
  int sum2 = t[3];
  int ans = max(sum1, sum2);
  for (int i = 2; i >= 0; i --) {
    int s = t[i];
    int x = sum1 - s;
    int y = sum2 + s;
    int tmp = max(x, y);
    ans = min(ans, tmp);
  }

  cout << ans << endl;
}
