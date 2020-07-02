#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

vector<int> p;

int find_root(int x) {
  if (p[x] != x) p[x] = find_root(p[x]);
  return p[x];
}

void unite(int x, int y) {
  int nx = find_root(x);
  int ny = find_root(y);
  if (nx == ny) return;
  else {
    if (nx > ny) p[nx] = ny;
    else p[ny] = nx;
  }
}

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n);
  vector<bool> check(m, false);
  rep(i, n) {
    int k; cin >> k;
    rep(j, k) {
      int l; cin >> l;
      l --;
      check[l] = true;
      a[i].push_back(l);
    }
  }

  p = vector<int>(m);
  rep(i, m) p[i] = i;
  rep(i, n) {
    for (int j = 1; j < a[i].size(); j ++) {
      unite(a[i][0], a[i][j]);
    }
  }

  int sum = 0;
  rep(i, m) {
    if (p[i] == i && check[i]) sum ++;
  }

  if (sum == 1) cout << "YES" << endl;
  else cout << "NO" << endl; 
}