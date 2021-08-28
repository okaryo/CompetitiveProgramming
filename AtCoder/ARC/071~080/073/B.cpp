#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, W; cin >> n >> W;
  vector<LL> w(n), v(n);
  rep(i, n) cin >> w[i] >> v[i];

  vector<LL> w0, w1, w2, w3;
  rep(i, n) {
    if (w[i] == w[0])          w0.push_back(v[i]);
    else if (w[i] == w[0] + 1) w1.push_back(v[i]);
    else if (w[i] == w[0] + 2) w2.push_back(v[i]);
    else if (w[i] == w[0] + 3) w3.push_back(v[i]);
  }

  sort(all(w0));
  reverse(all(w0));
  sort(all(w1));
  reverse(all(w1));
  sort(all(w2));
  reverse(all(w2));
  sort(all(w3));
  reverse(all(w3));
  vector<LL> sum0(w0.size() + 1, 0);
  vector<LL> sum1(w1.size() + 1, 0);
  vector<LL> sum2(w2.size() + 1, 0);
  vector<LL> sum3(w3.size() + 1, 0);
  for (int i = 1; i <= w0.size(); i ++) sum0[i] = sum0[i - 1] + w0[i - 1];
  for (int i = 1; i <= w1.size(); i ++) sum1[i] = sum1[i - 1] + w1[i - 1];
  for (int i = 1; i <= w2.size(); i ++) sum2[i] = sum2[i - 1] + w2[i - 1];
  for (int i = 1; i <= w3.size(); i ++) sum3[i] = sum3[i - 1] + w3[i - 1];
  LL ans = 0;
  for (LL i0 = 0; i0 <= w0.size(); i0 ++) {
    for (LL i1 = 0; i1 <= w1.size(); i1 ++) {
      for (LL i2 = 0; i2 <= w2.size(); i2 ++) {
        for (LL i3 = 0; i3 <= w3.size(); i3 ++) {
          if (i0 * w[0] + i1 * (w[0] + 1) + i2 * (w[0] + 2) + i3 * (w[0] + 3) <= W) {
            ans = max(ans, sum0[i0] + sum1[i1] + sum2[i2] + sum3[i3]);
          }
        }
      }
    }
  }

  cout << ans << endl;
}
