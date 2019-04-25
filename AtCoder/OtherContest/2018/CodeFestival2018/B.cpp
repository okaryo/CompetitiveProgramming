#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  int s = x, t = y;
  while (s > 0 && t > 0) {
    if (s >= t) {
      s -= 3;
      t --;
    } else {
      s --;
      t -= 3;
    }
  }
  
  if (s == 0 && t == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
