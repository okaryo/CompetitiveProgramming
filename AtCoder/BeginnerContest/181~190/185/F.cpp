#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int op(int a, int b) {
  return a ^ b;
}

int e() {
  return 0;
}

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  segtree<int, op, e> seg(a);
  rep(i, q) {
    int t, x, y;
    cin >> t >> x >> y;
    x--;
    if (t == 1) {
      int v = seg.get(x);
      v ^= y;
      seg.set(x, v);
    } else {
    cout << seg.prod(x, y) << endl;
    }
  }
}
