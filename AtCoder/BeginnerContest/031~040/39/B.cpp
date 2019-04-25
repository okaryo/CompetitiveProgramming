#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  for (int i = 1; i < 200; i ++) {
    int y = i * i * i * i;
    if (x == y) {
      cout << i << endl;
      return 0;
    }
  }
}
