#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int w, h;
  string d;
  cin >> w >> h >> d;
  h --, w --;
  vector<string> s(9);
  for (int i = 0; i < 9; i ++) cin >> s[i];

  int cnt = 0;
  while (cnt < 4) {
    cout << s[h][w];
    if (d == "U") {
      h --;
      if (h == -1) h = 1, d = "D";
    } else if (d == "RU") {
      h --, w ++;
      if (h == -1 && w == 9) h = 1, w = 7, d = "LD";
      else if (h == -1) h = 1, d = "RD";
      else if (w == 9) w = 7, d = "LU";
    } else if (d == "R") {
      w ++;
      if (w == 9) w = 7, d = "L";
    } else if (d == "RD") {
      h ++, w ++;
      if (h == 9 && w == 9) h = 7, w = 7, d = "LU";
      else if (h == 9) h = 7, d = "RU";
      else if (w == 9) w = 7, d = "LD";
    } else if (d == "D") {
      h ++;
      if (h == 9) h = 7, d = "U";
    } else if (d == "LD") {
      h ++, w --;
      if (h == 9 && w == -1) h = 7, w = 1, d = "RU";
      else if (h == 9) h = 7, d = "LU";
      else if (w == -1) w = 1, d = "RD";
    } else if (d == "L") {
      w --;
      if (w == -1) w = 1, d = "R";
    } else if (d == "LU") {
      h --, w --;
      if (h == -1 && w == -1) h = 1, w = 1, d = "RD";
      else if (h == -1) h = 1, d = "LD";
      else if (w == -1) w = 1, d = "RU";
    }
    cnt ++;
  }
  cout << endl;
}