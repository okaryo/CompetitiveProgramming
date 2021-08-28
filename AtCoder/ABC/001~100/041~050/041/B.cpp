#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL a, b, c;
  cin >> a >> b >> c;
  
  LL ans = a * b % 1000000007 * c % 1000000007;

  cout << ans << endl;
}
