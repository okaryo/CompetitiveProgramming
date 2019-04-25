#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL a, k;
  cin >> a >> k;

  LL x = 2000000000000;
  if (k == 0) {
    cout << x - a << endl;
  } else {
    LL cnt = 0;
    while (x > a) {
      a += 1 + k * a;
      cnt ++;
    }
    cout << cnt << endl;
  }
}
