#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i ++) cin >> h[i];

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    if (h[i - 1] > h[i] || h[i] < h[i + 1]) continue;

    int left  = i;
    int right = i;
    while (left > 0 && h[left - 1] < h[left]) left --;
    while (right < n - 1 && h[right] > h[right + 1]) right ++;
    ans = max(ans, right - left + 1);
  }

  cout << ans << endl;
}