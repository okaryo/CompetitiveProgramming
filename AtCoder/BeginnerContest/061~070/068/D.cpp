#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL k; cin >> k;

  cout << 50 << endl;
  for (int i = 0; i < 50; i ++) {
    if (i) cout << " ";
    cout << 49 - i + (k + 49 - i) / 50;
  }
  cout << endl;
}