#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int r, d, x;
  cin >> r >> d >> x;
  for (int i = 0; i < 10; i ++) {
    int nx = r * x - d;
    cout << nx << endl;
    x = nx;
  }
}
