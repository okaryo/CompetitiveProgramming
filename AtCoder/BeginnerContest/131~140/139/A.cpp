#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string x, y;
  cin >> x >> y;
  int ans = 0;
  rep(i, 3) {
    if (x[i] == y[i]) ans ++;
  }
  cout << ans << endl;
}