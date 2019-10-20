#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n+2);
  for (int i = 0; i < q; i ++) {
    int l, r;
    cin >> l >> r;
    a[l] ++;
    a[r+1] --;
  }

  for (int i = 1; i <= n; i ++) {
    a[i] += a[i-1];
  }

  for (int i = 1; i <= n; i ++) {
    if (a[i] % 2 == 0) {
      cout << 0;
    } else {
      cout << 1;
    }
  }
  cout << endl;
}
