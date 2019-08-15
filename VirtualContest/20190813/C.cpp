#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  sort(all(a));
  int a1 = a.back(), a2 = a1 - a.front();
  int x = a1 / 2;
  for (int i = 0; i < n - 1; i ++) {
    if (abs(x - a[i]) <= abs(x - a2)) a2 = a[i];
  }

  cout << a1 << " " << a2 << endl;
}