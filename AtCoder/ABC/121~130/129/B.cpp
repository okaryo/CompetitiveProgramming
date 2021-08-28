#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> w(n);
  int sum = 0;
  for (int i = 0; i < n; i ++) {
    cin >> w[i];
    sum += w[i];
  }

  int ans = sum;
  for (int i = 0; i <= n; i ++) {
    int x = 0;
    for (int j = 0; j < i; j ++) {
      if (j < i) x += w[j];
    }
    ans = min(ans, abs(sum - x * 2));
  }

  cout << ans << endl;
}