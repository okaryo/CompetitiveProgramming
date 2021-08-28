#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

vector<int> p;
 
int find_root(int x) {
  if (p[x] != x) p[x] = find_root(p[x]);
  return p[x];
}
 
void unite(int x, int y) {
  int nx = find_root(x);
  int ny = find_root(y);
  if (nx == ny) return;
  else p[ny] = nx;
}

bool same(int x, int y) {
  int nx = find_root(x);
  int ny = find_root(y);
  return nx == ny;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n ; i ++) {
    cin >> a[i];
    a[i] --;
  }

  p = vector<int>(n);
  for (int i = 0; i < n; i ++) p[i] = i;
  for (int i = 0; i < m; i ++) {
    int x, y;
    cin >> x >> y;
    x --, y --;
    if (x > y) swap(x, y);
    unite(x, y);
  }

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    if (same(i, a[i])) ans ++;
  }

  cout << ans << endl;
}