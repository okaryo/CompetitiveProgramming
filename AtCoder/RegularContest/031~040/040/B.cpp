#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, r;
  cin >> n >> r;
  string s; cin >> s;
  
  int ans = 0;
  for (int i = n - 1; i >= 0; i --) {
    if (s[i] == '.' && i - r >= 0) {
      ans = i - r + 1;
      break;
    }
  }

  for (int i = 0; i < n; i ++) {
    if (s[i] == '.') {
      ans ++;
      i += r - 1;
    }
  }

  cout << ans << endl;
}