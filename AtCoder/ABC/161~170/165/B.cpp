#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL x;
  cin >> x;
  LL now = 100.0;

  LL ans = 0;
  while (now < x) {
    ans ++;
    now *= 1.01;
  }
  cout << ans << endl;
}
