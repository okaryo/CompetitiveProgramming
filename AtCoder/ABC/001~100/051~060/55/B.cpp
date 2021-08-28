#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;

  LL ans = 1;
  for (int i = 1; i <= n; i ++) {
    ans = (ans * i) % 1000000007;
  }

  cout << ans << endl;
}
