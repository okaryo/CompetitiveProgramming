#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m;
  cin >> n >> m;
  int sum = 0;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    sum += a[i];
  }

  int count = 0;
  int t = (sum + 4 * m - 1) / (4 * m);
  for (int i = 0; i < n; i ++) {
    if (a[i] >= t) count ++;
  }

  if (count >= m) cout << "Yes" << endl;
  else cout << "No" << endl;
}
