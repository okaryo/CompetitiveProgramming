#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<char> color(n);
  for (int i = 0; i < n; i ++) {
    cin >> color.at(i);
  }

  int p = 0, w = 0, g = 0, y = 0;
  for (int i = 0; i < n; i ++) {
    if (color.at(i) == 'P') {
      p ++;
    } else if (color.at(i) == 'W') {
      w ++;
    } else if (color.at(i) == 'G') {
      g ++;
    } else {
      y ++;
    }
  }

  if (p == 0 || w == 0 || g == 0 || y == 0) {
    cout << "Three" << endl;
  } else {
    cout << "Four" << endl;
  }
}
