#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  pair<int, int> p[n];
  rep(i, n) {
    cin >> p[i].first;
    p[i].second = i;
  }

  sort(p, p + n);
  int ans = 0;
  rep(i, n) {
    if (i % 2 != p[i].second % 2) ans ++;
  }
  cout << ans / 2 << endl;
}