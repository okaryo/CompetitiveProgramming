#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  double a, b;
  cin >> a >> b;
  if (a < b) swap(a, b);
  int n; cin >> n;
  double c, d;
  rep(i, n) {
    cin >> c >> d;
    if (c < d) swap(c, d);
    if (a <= c && b <= d) {
      cout << "YES" << endl;
      continue;
    }
  }
}