#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

vector<int> p;
int ans;

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
    ans --;
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  ans = n;
  p = vector<int>(n);
  for (int i = 0; i < n; i ++) p[i] = i;
  for (int i = 0; i < m; i ++) {
    int x, y, z;
    cin >> x >> y >> z;
    x --, y --;
    unite(x, y);
  }
  cout << ans << endl;
}