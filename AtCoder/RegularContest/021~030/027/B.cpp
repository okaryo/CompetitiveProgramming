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
  else if (nx > ny) p[nx] = ny;
  else p[ny] = nx;
}

int main() {
  int n; cin >> n;
  string s1, s2;
  cin >> s1 >> s2;

  p = vector<int>(26);
  for (int i = 0; i < 26; i ++) p[i] = i;

  vector<bool> check(26, false);
  for (int i = 0; i < n; i ++) {
    if ('A' <= s1[i] && 'A' <= s2[i]) {
      unite(s1[i] - 'A', s2[i] - 'A');
    }
  }
  for (int i = 0; i < n; i ++) {
    if ('A' <= s1[i] && s2[i] <= '9') {
      int t = find_root(s1[i] - 'A');
      check[t] = true;
    } else if (s1[i] <= '9' && 'A' <= s2[i]) {
      int t = find_root(s2[i] - 'A');
      check[t] = true;
    }
  }

  LL ans = 1;
  for (int i = 0; i < n; i ++) {
    if (s1[i] <= '9') continue;
    else {
      int t = find_root(s1[i] - 'A');
      if (!check[t]) {
        check[t] = true;
        if (i == 0) ans *= 9;
        else ans *= 10;
      }
    }
  }

  cout << ans << endl;
}