#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int n = s.size();
  for (int i = 1; i < n; i ++) {
    if (s[i - 1] == s[i]) {
      cout << i << " " << i + 1 << endl;
      return 0;
    }
  }

  for (int i = 2; i < n; i ++) {
    if (s[i - 2] == s[i]) {
      cout << i - 1 << " " << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << " " << -1 << endl;
}