#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  double n; cin >> n;
  int t = ceil(n / 1.08);
  if (int(t * 1.08) == n) cout << t << endl;
  else cout << ":(" << endl;
}