#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i ++) cin >> h[i];

  int ans = 1, max = h[0];
  for (int i = 1; i < n; i ++) {
    if (max <= h[i]) {
      ans ++;
      max = h[i];
    }
  }

  cout << ans << endl;
}