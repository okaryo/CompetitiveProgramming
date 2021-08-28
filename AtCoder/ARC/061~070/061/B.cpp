#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int dx[9] = {0, -1, -2, 0, -1, -2, 0, -1, -2};
int dy[9] = {0, 0, 0, -1, -1, -1, -2, -2, -2};

int main() {
  LL h, w, n;
  cin >> h >> w >> n;
  vector<pair<int, int>> a;
  for (int i = 0; i < n; i ++) {
    int x, y;
    cin >> x >> y;
    x --, y --;
    for (int j = 0; j < 9; j ++) {
      int nx = x + dx[j];
      int ny = y + dy[j];
      if (nx >= 0 && ny >= 0 && nx < h - 2 && ny < w - 2) a.push_back(make_pair(nx, ny));
    }
  }

  sort(a.begin(), a.end());
  LL cnt[10] = {};
  LL t = 1, sum = 0;
  for (int i = 0; i < max(0, (int)a.size() - 1); i ++) {
    if (a[i].first == a[i + 1].first && a[i].second == a[i + 1].second) t ++;
    else cnt[t] ++, t = 1, sum ++;
  }
  cnt[t] ++, sum ++;
  if (a.size() == 0) cnt[t] = 0, sum = 0;

  for (int i = 0; i < 10; i ++) {
    if (i) cout << cnt[i] << endl;
    else cout << (h - 2) * (w - 2) - sum << endl;
  }
}