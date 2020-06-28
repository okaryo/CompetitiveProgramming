#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int h, w; cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];

  vector<pair<pair<int, int>, pair<int, int>>> p;
  int num = 0;
  rep(i, h) rep(j, w - 1) {
    if (a[i][j] % 2 == 1) {
      num ++;
      p.push_back(make_pair(make_pair(i + 1, j + 1), make_pair(i + 1, j + 2)));
      //cout << i + 1 << " " << j + 1 << " " << i + 1 << " " << j + 2 << endl;
      a[i][j] --, a[i][j + 1] ++;
    }
  }
  rep(i, h - 1) {
    if (a[i][w - 1] % 2 == 1) {
      num ++;
      p.push_back(make_pair(make_pair(i + 1, w), make_pair(i + 2, w)));
      //cout << i + 1 << " " << w - 1 << " " << i + 2 << " " << w - 1 << endl;
      a[i][w - 1] --, a[i + 1][w - 1] ++;
    }
  }

  cout << num << endl;
  rep(i, num) {
    cout << p[i].first.first << " " << p[i].first.second << " " << p[i].second.first << " " << p[i].second.second << endl;
  }
}