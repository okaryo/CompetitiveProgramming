#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1;; i ++) {
    if (i * i > n) {
      cout << (i - 1) * (i - 1) << endl;
      break;
    }
  }
}
