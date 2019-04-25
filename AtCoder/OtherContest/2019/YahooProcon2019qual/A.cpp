#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int x = 2 * k - 1;
  if (n >= x) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
