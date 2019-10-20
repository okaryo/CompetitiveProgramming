#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int k, j, i;
  j = 0;
  if (m % 2 == 1) {
    n --;
    m -= 3;
    j = 1;
  }
  i = (m - 2*n) / 2;
  k = (4*n - m) / 2;
  if (i >= 0 && k >= 0) {
    cout << k << " " << j << " " << i << endl;
    return 0;
  }

  cout << "-1 -1 -1" << endl;
}
