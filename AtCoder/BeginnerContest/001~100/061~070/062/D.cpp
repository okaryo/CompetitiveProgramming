#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL sum_a[100010] = {}, sum_b[100010] = {};
LL c[100010] = {};
priority_queue<LL, vector<LL>, greater<LL>> a;
priority_queue<LL> b;

int main() {
  int n; cin >> n;
  for (int i = 0; i < n; i ++) {
    LL t; cin >> t;
    sum_a[0] += t;
    a.push(t);
  }
  for (int i = 1; i <= n; i ++) cin >> c[i];
  for (int i = 0; i < n; i ++) {
    LL t; cin >> t;
    sum_b[n + 1] += t;
    b.push(t);
  }

  for (int i = 1; i <= n; i ++) {
    LL t = a.top();
    sum_a[i] = sum_a[i - 1];
    if (c[i] > t) {
      sum_a[i] += c[i];
      sum_a[i] -= t;
      a.push(c[i]);
      a.pop();
    }
  }
  for (int i = n; i >= 1; i --) {
    LL t = b.top();
    sum_b[i] = sum_b[i + 1];
    if (c[i] < t) {
      sum_b[i] += c[i];
      sum_b[i] -= t;
      b.push(c[i]);
      b.pop();
    }
  }

  LL ans = -1e18;
  for (int i = 0; i <= n; i ++) {
    ans = max(ans, sum_a[i] - sum_b[i + 1]);
  }
  cout << ans << endl;
}