#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n + 1);
  a[0] = 1, a[1] = 1;
  for (int i = 2; i <= n; i ++) {
    a[i] = a[i - 1] + a[i - 2];
  }

  cout << a[n] << endl;
}
