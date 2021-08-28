#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  string ans = "Yes";
  int minv = h[n - 1];
  for (int i = n - 2; i >= 0; i --) {
    if (h[i] > minv) {
      if (h[i] - 1 > minv) {
        ans = "No";
        break;
      } else h[i] --;
    }
    minv = min(minv, h[i]);
  }
  cout << ans << endl;
}