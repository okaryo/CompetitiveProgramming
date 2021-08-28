#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, va, vb, l;
  cin >> n >> va >> vb >> l;
  
  double ans = l;
  for (int i = 0; i < n; i ++) {
    ans /= (double)va;
    ans *= vb;
  }

  if (ans <= 0.000001) ans = 0;
  cout << setprecision(15) << ans << endl;
}