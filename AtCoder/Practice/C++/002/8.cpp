#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

LL solve(LL m, LL n) {
  if (m == 0) return n + 1;
  else if (n == 0) solve(m - 1, 1);
  else solve(m - 1, solve(m, n - 1));
}

int main() {
  LL m, n;
  cin >> m >> n;

  cout << solve(m, n) << endl;
}