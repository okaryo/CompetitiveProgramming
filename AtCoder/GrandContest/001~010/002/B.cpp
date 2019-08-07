#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m; cin >> n >> m;
  vector<int> num(n, 1);
  vector<bool> red(n, false);
  red[0] = true;

  for (int i = 0; i < m; i ++) {
    int x, y;
    cin >> x >> y;
    x --, y --;
    if (red[x]) red[y] = true;
    num[x] --, num[y] ++;
    if (num[x] == 0) red[x] = false;
  }

  int ans = 0;
  rep(i, n) {
    if (red[i]) ans ++;
  }
  cout << ans << endl;
}