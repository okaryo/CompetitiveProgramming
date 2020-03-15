#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, a, b;
  cin >> n >> a >> b;

  LL ans = 0;
  ans += (n / (a + b)) * a;
  ans += min(a, n % (a + b));

  cout << ans << endl;
}
