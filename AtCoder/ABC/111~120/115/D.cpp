#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

LL n, x;
vector<LL> thick, num;

LL solve(LL a, LL b) {
  if (b == 0) return 0;
  else if (a == 0) return 1;
  else if (b <= thick[a - 1] + 1) return solve(a - 1, b - 1);
  else return num[a - 1] + 1 + solve(a - 1, b - thick[a - 1] - 2);
}

int main() {
  cin >> n >> x;
  thick = vector<LL>(n + 1);
  num = vector<LL>(n + 1);
  thick[0] = 1, num[0] = 1;
  for (int i = 1; i <= n; i ++) {
    thick[i] = thick[i - 1] * 2 + 3;
    num[i] = num[i - 1] * 2 + 1;
  }

  cout << solve(n, x) << endl;
}