#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) cin >> s[i][j];
  }
  vector<vector<int>> ue(h, vector<int>(w, 0));
  for (int i = 1; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      if (s[i - 1][j] == '.') ue[i][j] = ue[i- 1][j] + 1;
      else ue[i][j] = 0;
    }
  }
  vector<vector<int>> sita(h, vector<int>(w, 0));
  for (int i = h - 2; i >= 0; i --) {
    for (int j = 0; j < w; j ++) {
      if (s[i + 1][j] == '.') sita[i][j] = sita[i + 1][j] + 1;
      else sita[i][j] = 0;
    }
  }
  vector<vector<int>> migi(h, vector<int>(w, 0));
  for (int i = 0; i < h; i ++) {
    for (int j = w - 2; j >= 0; j --) {
      if (s[i][j + 1] == '.') migi[i][j] = migi[i][j + 1] + 1;
      else migi[i][j] = 0;
    }
  }
  vector<vector<int>> hidari(h, vector<int>(w, 0));
  for (int i = 0; i < h; i ++) {
    for (int j = 1; j < w; j ++) {
      if (s[i][j - 1] == '.') hidari[i][j] = hidari[i][j - 1] + 1;
      else hidari[i][j] = 0;
    }
  }
  int ans = 0;
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      if (s[i][j] == '#') continue;
      else {
        ans = max(ans, ue[i][j] + sita[i][j] + migi[i][j] + hidari[i][j] + 1);
      }
    }
  }
  cout << ans << endl;
}