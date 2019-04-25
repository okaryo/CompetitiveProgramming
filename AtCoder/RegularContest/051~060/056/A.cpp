#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL a, b, k, l;
  cin >> a >> b >> k >> l;

  LL x = (k % l) * a;
  LL ans;
  if (b > x) {
    ans = (k / l) * b + (k % l) * a;
  } else {
    ans = (k / l + 1) * b;
  }


  cout << ans << endl;
}
