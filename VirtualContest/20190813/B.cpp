#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL x, y, z, k;
  cin >> x >> y >> z >> k;
  vector<LL> a(x), b(y), c(z);
  rep(i, x) cin >> a[i];
  rep(i, y) cin >> b[i];
  rep(i, z) cin >> c[i];

  vector<LL> ab;
  for (int i = 0; i < x; i ++) {
    for (int j = 0; j < y; j ++) {
      ab.push_back(a[i] + b[j]);
    }
  }
  sort(all(ab));
  priority_queue<LL> pq;
  int n = ab.size();
  for (int i = n - 1; i >= max((LL)0, n - k); i--) {
    for (int j = 0; j < z; j ++) {
      pq.push(ab[i] + c[j]);
    }
  }

  rep(i, k) {
    cout << pq.top() << endl;
    pq.pop();
  }
}