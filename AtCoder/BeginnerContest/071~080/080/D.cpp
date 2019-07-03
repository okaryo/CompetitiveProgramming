#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, c;
  cin >> n >> c;
  vector<int> sum(100000 + 2, 0);
  for (int i = 0; i < n; i ++) {
    int a, b, c;
    cin >> a >> b >> c;
    sum[a] ++, sum[b + 1] --;
  }

  int ans = 0;
  for (int i = 1; i < sum.size(); i ++) {
    sum[i] += sum[i - 1];
    ans = max(ans, sum[i]);
  }

  cout << ans << endl;
}