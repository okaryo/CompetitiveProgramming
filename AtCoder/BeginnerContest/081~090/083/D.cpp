#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int ans = n;
  for (int i = 1; i < n; i ++) {
    if (s[i] != s[i - 1]) {
      ans = min(ans, max(i, n - i));
    }
  }

  cout << ans << endl;
}