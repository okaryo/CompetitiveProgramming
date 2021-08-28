#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;

  int ans = 0;
  ans += (n / 500) * 1000;
  n %= 500;
  ans += (n / 5) * 5;

  cout << ans << endl;
}
