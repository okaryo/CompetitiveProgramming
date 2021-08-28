#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

LL solve(LL x) {
  if (x > 1) return 2 * solve(x / 2) + 1;
  else return 1;
}

int main() {
  LL h; cin >> h;

  cout << solve(h) << endl;
}
