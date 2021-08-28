#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i ++) {
    if (i != m) {
      cout << i << endl;
      return 0;
    }
  }
}
