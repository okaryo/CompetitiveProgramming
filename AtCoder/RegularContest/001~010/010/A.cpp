#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  for (int i = 0; i < m; i ++) {
    int c;
    cin >> c;
    if (n <= a) n += b;
    n -= c;
    if (n < 0) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << "complete" << endl;
}
