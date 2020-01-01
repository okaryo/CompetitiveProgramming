#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL a, b, k;
  cin >> a >> b >> k;

  if (a >= k) {
    cout << a - k << " " << b << endl;
  } else {
    cout << 0 << " " << max((LL)0, b - k + a) << endl;
  }
}