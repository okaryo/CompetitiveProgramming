#include <bits/stdc++.h>
using namespace std;

const int N = 10;
int n, m;
bool g[N][N];

int check(int t) {
  bool a[N];
  for (int i = 0; i < n; i ++) a[i] = false;
  
  for (int i = 0; i < n; i ++) {
    if (g[t][i]) {
      for (int j = 0; j < n; j ++) {
        if (j == i || j == t) continue;
        if (g[t][j] == false && g[j][i] == true) a[j] = true;
      }
    }
  }

  int cnt = 0;
  for (int i = 0; i < n; i ++) {
    if (a[i]) cnt ++;
  }

  return cnt;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i ++) {
    int x, y; cin >> x >> y;
    x --, y --;
    g[x][y] = g[y][x] = true;
  }

  for (int i = 0; i < n; i ++) {
    cout << check(i) << endl;
  }
}
