#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int sum = 0;
int g[3][3];
int b[2][3], c[3][2];

pair<int, int> chokudai() {
  int gsum = 0;
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j ++) {
      if (g[i][j] > 0) gsum ++;
    }
  }

  if (gsum == 9) {
    int choku = 0, naoko = 0;
    for (int i = 0; i < 2; i ++) {
      for (int j = 0; j < 3; j ++) {
        if (g[i][j] == g[i + 1][j]) choku += b[i][j];
        else naoko += b[i][j];
      }
    }
    for (int i = 0; i < 3; i ++) {
      for (int j = 0; j < 2; j ++) {
        if (g[i][j] == g[i][j + 1]) choku += c[i][j];
        else naoko += c[i][j];
      }
    }
    return make_pair(choku, naoko);
  }

  int maxv = 0, minv = 0;
  pair<int, int> t;
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j ++) {
      if (g[i][j] == 0) {
        if (gsum % 2 == 0) {
          g[i][j] = 1;
          t = chokudai();
          if (maxv <= t.first) {
            maxv = t.first;
            minv = t.second;
          }
        } else {
          g[i][j] = 2;
          t = chokudai();
          if (minv <= t.second) {
            maxv = t.first;
            minv = t.second;
          }
        }
        g[i][j] = 0;
      }
    }
  }
  return make_pair(maxv, minv);
}

int main() {
  for (int i = 0; i < 2; i ++) {
    for (int j = 0; j < 3; j ++) cin >> b[i][j], sum += b[i][j];
  }
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 2; j ++) cin >> c[i][j], sum += c[i][j];
  }
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j ++) g[i][j] = 0;
  }

  cout << chokudai().first << endl << chokudai().second << endl;
}
