#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int x, y;
  cin >> x >> y;
  if (x < 0) x *= -1;
  if (y < 0) {
    cout << -1 << endl;
    return 0;
  }
  if (y % 2 == 0) {
    if ((y / 2) % 2 == 0 && x % 2 == 0 && x <= y / 2) {
      cout << y / 2 << endl;
    } else if ((y / 2) % 2 == 1 && x % 2 == 1 && x <= y / 2) {
      cout << y / 2 << endl;
    } else {
      cout << -1 << endl;
    }
  } else {
    cout << -1 << endl;
  }
}