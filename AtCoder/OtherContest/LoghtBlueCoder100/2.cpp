#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i += 2) {
    int cnt = 0;
    for (int j = 1; j <= i; j ++) {
      if (i % j == 0) {
        cnt ++;
      }
    }
    if (cnt == 8) sum ++;
  }

  cout << sum << endl;
}
