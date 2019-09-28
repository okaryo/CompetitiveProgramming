#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  double ans = (double)((double)(n  + 1)/ 2) / n;
  cout << setprecision(15) << ans << endl;
}