#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, k, m;
  cin >> n >> k >> m;
  int sum = 0;
  rep(i, n - 1) {
    int t; cin >> t;
    sum += t;
  }

  if (m * n - sum <= k) {
    cout << max(0, m * n - sum) << endl;
  } else {
    cout << -1 << endl;
  }
}