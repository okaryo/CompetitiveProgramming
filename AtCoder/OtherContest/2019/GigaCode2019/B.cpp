#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;

  int ans = 0;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    if (a >= x && b >= y && a + b >= z) ans ++;
  }

  cout << ans << endl;
}