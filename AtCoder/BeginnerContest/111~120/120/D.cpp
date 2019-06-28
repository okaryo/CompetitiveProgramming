#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL ans;
vector<LL> p;
vector<LL> cnt;

LL find_root(LL x) {
  if (p[x] != x) p[x] = find_root(p[x]);
  return p[x];
}

void unite(LL x, LL y) {
  LL nx = find_root(x);
  LL ny = find_root(y);
  ans = 0;
  if (nx == ny) return;
  else {
    p[ny] = nx;
    ans = cnt[nx] * cnt[ny];
    cnt[nx] += cnt[ny];
  }
}

int main() {
  LL n, m;
  cin >> n >> m;
  p = vector<LL>(n);
  cnt = vector<LL>(n, 1);
  for (int i = 0; i < n; i ++) p[i] = i;

  vector<LL> a(m), b(m);
  for (int i = 0; i < m; i ++) {
    int s, t; cin >> s >> t;
    s --, t --;
    a[i] = s, b[i] = t;
  }

  vector<LL> res(m);
  res[m - 1] = n * (n - 1) / 2;
  for (int i = m - 1; i >= 1; i --) {
    unite(a[i], b[i]);
    res[i - 1] = res[i] - ans;
  }

  for (int i = 0; i < m; i ++) {
    cout << res[i] << endl;
  }
}
