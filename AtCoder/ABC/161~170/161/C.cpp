#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, k;
  cin >> n >> k;

  cout << min(n % k, abs(n % k - k)) << endl;
}
