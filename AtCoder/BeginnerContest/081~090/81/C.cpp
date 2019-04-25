#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  array<int, 200005> a = {};
  for (int i = 0; i < n; i ++) {
    int tmp; cin >> tmp;
    a[tmp] ++;
  }

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  LL ans = 0;
  for (int i = k; i < a.size(); i ++) {
    ans += a[i];
  }

  cout << ans << endl;
}
