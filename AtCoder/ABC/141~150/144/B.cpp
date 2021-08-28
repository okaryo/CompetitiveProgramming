#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  bool check = false;
  for (int i = 1; i <= 9; i ++) {
    for (int j = 1; j <= 9; j ++) {
      if (i * j == n) {
        check = true;
        break;
      }
    }
    if (check) break;
  }

  if (check) cout << "Yes" << endl;
  else cout << "No" << endl;
}