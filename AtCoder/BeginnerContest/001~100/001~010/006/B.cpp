#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<LL> a(1000000);
  a.at(0) = 0, a.at(1) = 0, a.at(2) = 1;
  for (int i = 3; i < n; i ++) {
    a.at(i) = a.at(i - 1) + a.at(i - 2) + a.at(i - 3);
    a.at(i) %= 10007;
  }
  LL ans = a.at(n - 1);
  cout << ans << endl;
}
