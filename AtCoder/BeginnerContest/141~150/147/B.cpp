#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s;
  cin >> s;
  int ans = 0;
  int n = s.size();

  for (int i = 0; i < n / 2; i ++) {
    if (s[i] != s[n - 1 - i]) ans ++;
  }

  cout << ans << endl;
}