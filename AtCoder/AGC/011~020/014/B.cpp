#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m; cin >> n >> m;
  vector<int> v(n, 0);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--, b --;
    v[a] ++, v[b] ++;
  }

  string ans = "YES";
  rep(i, n) {
    if (v[i] % 2 == 1) ans = "NO";
  }
  cout << ans << endl;
}