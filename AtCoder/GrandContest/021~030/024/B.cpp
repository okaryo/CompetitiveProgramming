#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> p(n), q(n);
  rep(i, n) {
    cin >> p[i];
    q[p[i] - 1] = i;
  }

  int maxv = 1, t = 1;
  for (int i = 1; i < n; i ++) {
    if (q[i - 1] < q[i]) t ++;
    else {
      maxv = max(maxv, t);
      t = 1;
    }
  }
  maxv = max(maxv, t);

  cout << n - maxv << endl;
}