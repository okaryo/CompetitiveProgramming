//  #
// #.#
//#.#.#
// #.#
//  #
//上を探索しないといけなかった

#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> s(400, vector<char> (400, '0'));
int num_black;
int num_white;

void dfs(int x, int y) {
  s.at(x).at(y) = '0';

  for (int dx = -1; dx <= 1; dx ++) {
    for (int dy = -1; dy <= 1; dy ++) {
      int nx = x + dx;
      int ny = y + dy;
      if ((dx == -1 && dy == 0) || (dx == 0 && dy == -1) || (dx == 0 && dy == 1) || (dx == 1 && dy == 0)) {
        if (s.at(nx).at(ny) == '.') {
          num_white ++;
          s.at(nx).at(ny) = '0';
        }
      }
      if ((dx == -1 && dy == -1) || (dx == -1 && dy == 1) || (dx == 1 && dy == -1) || (dx == 1 && dy == 1)) {
        if (s.at(nx).at(ny) == '#') {
          num_black ++;
          dfs(nx, ny);
        }
      }
    }
  }

  return;
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> S(h + 2, vector<char> (w + 2, '0'));
  for (int i = 1; i <= h; i ++) {
    for (int j = 1; j <= w; j ++) {
      char tmp; cin >> tmp;
      S.at(i).at(j) = tmp;
    }
  }

  int ans = 0;
  for (int i = 1; i <= h; i ++) {
    for (int j = 1; j <= w; j ++) {
      num_black = 0;
      num_white = 0;
      if (S.at(i).at(j) == '#') dfs(i, j);

      if (num_black == 0) ans += num_white;
      else ans += num_black * num_white;
    }
  }

  cout << ans << endl;
}
