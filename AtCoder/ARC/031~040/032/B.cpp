#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int cnt_p;
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
    p[ny] = nx;
    cnt_p --;
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  cnt_p = n;
  p = vector<int>(n);
  for (int i = 0; i < n; i ++) p[i] = i;
  for (int i = 0; i < m; i ++) {
    int a, b;
    cin >> a >> b;
    a --, b --;
    unite(a, b);
  }

  cout << cnt_p - 1 << endl;
}