#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  bool ok = true;
  for (int i = 0; i < n; i ++) {
    int t; cin >> t;
    if (t % 2 == 0) {
      if (t % 3 != 0 && t % 5 != 0) ok = false;
    }
  }

  if (ok) cout << "APPROVED" << endl;
  else cout << "DENIED" << endl;
}
