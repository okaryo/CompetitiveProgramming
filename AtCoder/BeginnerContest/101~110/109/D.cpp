#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) cin >> a[i][j];
  }

  queue<pair<int, int>> Q1, Q2;
  for (int i = 0; i < h; i ++) {
    if (i % 2 == 0) {
      for (int j = 0; j < w; j ++) {
        if (i == h - 1 && j == w - 1) continue;
        if ((i != h - 1 && j == w - 1) && a[i][j] % 2 == 1) {
          a[i][j] --;
          a[i + 1][j] ++;
          Q1.push(make_pair(i + 1, j + 1));
          Q2.push(make_pair(i + 2, j + 1));
        } else if (a[i][j] % 2 == 1) {
          a[i][j] --;
          a[i][j + 1] ++;
          Q1.push(make_pair(i + 1, j + 1));
          Q2.push(make_pair(i + 1, j + 2));
        }
      }
    } else {
      for (int j = w - 1; j >= 0; j --) {
        if (i == h - 1 && j == 0) continue;
        if ((i != h - 1 && j == 0) && a[i][j] % 2 == 1) {
          a[i][j] --;
          a[i + 1][j] ++;
          Q1.push(make_pair(i + 1, j + 1));
          Q2.push(make_pair(i + 2, j + 1));
        } else if (a[i][j] % 2 == 1) {
          a[i][j] --;
          a[i][j - 1] ++;
          Q1.push(make_pair(i + 1, j + 1));
          Q2.push(make_pair(i + 1, j));
        }
      }
    }
  }

  cout << Q1.size() << endl;
  pair<int, int> q1, q2;
  while (!Q1.empty()) {
    q1 = Q1.front(); Q1.pop();
    q2 = Q2.front(); Q2.pop();
    cout << q1.first << " " << q1.second << " ";
    cout << q2.first << " " << q2.second << endl;
  }
}