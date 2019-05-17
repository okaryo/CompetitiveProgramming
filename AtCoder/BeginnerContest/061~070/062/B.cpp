#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  for (int i = 0; i < h; i ++) {
    cin >> a.at(i);
  }

  vector<vector<char>> b(h + 2, vector<char>(w + 2));
  for (int i = 0; i < h + 2; i ++) {
    for (int j = 0; j < w + 2; j ++) {
      b.at(i).at(j) = '#';
    }
  }

  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j ++) {
      b.at(i + 1).at(j + 1) = a. at(i).at(j);
    }
  }

  for (int i = 0; i < h + 2; i ++) {
    for (int j = 0; j < w + 2; j ++) {
      cout << b.at(i).at(j);
    }
    cout << endl;
  }
}
