#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s;
  cin >> s;
  int n = s.size();
  bool ok_1 = true, ok_2 = true, ok_3 = true;

  for (int i = 0; i < n / 2; i ++) {
    if (s[i] != s[n - i - 1]) ok_1 = false;
  }

  int m = (n - 1) / 2;
  for (int i = 0; i < m; i ++) {
    if (s[i] != s[m - i - 1]) ok_2 = false;
  }

  int l = (n + 3) / 2;
  for (int i = 0; i < n - l; i ++) {
    if (s[l + i - 1] != s[n - i - 1]) ok_3 = false;
  }

  if (ok_1 && ok_2 && ok_3) cout << "Yes" << endl;
  else cout << "No" << endl;
}
