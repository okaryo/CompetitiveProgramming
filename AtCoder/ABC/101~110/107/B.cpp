#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> vec(h);
  for (int i = 0; i < h; i ++) {
    cin >> vec.at(i);
  }

  vector<bool> col(h, false);
  vector<bool> row(w, false);
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      if (vec.at(i).at(j) == '#') {
        col.at(i) = true;
        row.at(j) = true;
      }
    }
  }

  for (int i = 0; i < h; i ++) {
    if (col.at(i)) {
      for (int j = 0; j < w; j ++) {
        if (row.at(j)) {
          cout << vec.at(i).at(j);
        }
      }
      cout << endl;
    }
  }
}
