#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  for (int i = 0; i < h; i ++) cin >> a.at(i);

  vector<int> dx = {1, 0, -1, 0, 1, -1, -1, 1};
  vector<int> dy = {0, 1, 0, -1, 1, 1, -1, -1};

  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      if (a.at(i).at(j) == '#') continue;

      int num = 0;
      for (int d = 0; d < 8; d ++) {
        int ni = i + dy.at(d);
        int nj = j + dx.at(d);

        if (ni < 0 || h <= ni) continue;
        if (nj < 0 || w <= nj) continue;
        if (a.at(ni).at(nj) == '#') num ++;
      }
      a.at(i).at(j) = char(num + '0');
    }
  }

  for (int i = 0; i < h; i ++) cout << a.at(i) << endl;
}
