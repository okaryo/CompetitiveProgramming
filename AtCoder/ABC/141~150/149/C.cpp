#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int x; cin >> x;
  bool check = true;

  for (int i = x; ; i ++) {
    for (int j = 2; j * j <= x; j ++) {
      if (i % j == 0) {
        check = false;
        break;
      }
    }
    if (check) {
      cout << i << endl;
      return 0;
    }
    check = true;
  }
}