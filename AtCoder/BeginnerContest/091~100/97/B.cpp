#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<bool> expo(n + 1);

  expo.at(1) = 1;
  for (int b = 2; b <= n; b ++) {
    int v = b * b;
    while (v <= n) {
      expo.at(v) = 1;
      v *= b;
    }
  }
  for (int i = n; i >= 1; i --) {
    if (expo.at(i)) {
      cout << i << endl;
      return 0;
    }
  }
}
