#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  if ((n - 1) % (k - 1) == 0) {
    cout << (n - 1) / (k - 1) << endl;
  } else {
    cout << (n - 1) / (k - 1) + 1 << endl;
  }
}
