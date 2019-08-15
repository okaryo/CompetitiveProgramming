#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int dx[9] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
int dy[9] = {0, 0, 0, 1, 1, 1, 2, 2, 2};

int main() {
  LL h, w, n;
  cin >> h >> w >> n;
  map<pair<int, int>, LL> mp;
  rep(i, n) {
    int x, y; cin >> x >> y;
    x --, y --;
    rep(j, 9) {
      int nx = x + dx[j];
      int ny = y + dy[j];
      if (1 < nx && 1 < ny && nx <= h - 1 && ny <= w - 1) mp[make_pair(nx, ny)] ++;
    }
  }

  vector<LL> ans(10, 0);
  int sum = 0;
  for (auto x : mp) {
    ans[x.second] ++;
    sum ++;
  }
  ans[0] = (h - 2) * (w - 2) - sum;

  rep(i, 10) {
    cout << ans[i] << endl;
  }
}