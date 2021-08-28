#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const long double PI = (acos(-1));

int main() {
  double a, b, x;
  cin >> a >> b >> x;

  double ans;

  if (x >= (a * a * b) / 2.0) {
    ans = atan((2.0 * (a * a * b - x)) / (a * a * a));
  } else {
    ans = PI / 2 - atan((2.0 * x) / (a * b * b));
  }

  cout << setprecision(15) << ans * 180.0 / PI << endl;
}
