#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k;
  cin >> n >> k;
  int maxv = -1, ans = -1;
  rep(i, n) {
    int t; cin >> t;
    if (t < k) {
      if (t > maxv) {
        maxv = t;
        ans = i + 1;
      }
    }
  }

  cout << ans << endl;
}