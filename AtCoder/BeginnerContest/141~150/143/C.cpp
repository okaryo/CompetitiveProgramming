#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 1;
  for (int i = 1; i < n; i ++) {
    if (s[i - 1] != s[i]) ans ++;
  }

  cout << ans << endl;
}