#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> a(h, vector<char>(w));
  int cnt = 0, min_choice = h + w - 1;
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      cin >> a.at(i).at(j);
      if (a.at(i).at(j) == '#') {
        cnt ++;
      }
    }
  }

  string ans;
  if (cnt == min_choice) {
    ans = "Possible";
  } else {
    ans = "Impossible";
  }
  cout << ans << endl;
}
