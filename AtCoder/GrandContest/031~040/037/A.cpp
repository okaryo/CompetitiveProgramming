#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int n = s.size();
  vector<int> a(n + 1);
  a[0] = 0, a[1] = 1;
  if (s[0] == s[1]) a[2] = 1;
  else a[2] = 2;
  for (int i = 3; i <= n; i ++) {
    if (s[i - 1] == s[i - 2]) a[i] = a[i - 3] + 2;
    else a[i] = a[i - 1] + 1;
  }

  cout << a[n] << endl;
}