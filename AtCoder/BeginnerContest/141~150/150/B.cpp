#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  for (int i = 0; i < n - 3 + 1; i ++) {
    if (s.substr(i, 3) == "ABC") ans ++;
  }

  cout << ans << endl;
}