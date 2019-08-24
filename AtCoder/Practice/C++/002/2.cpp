#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int k; cin >> k;

  int n = s.size();
  rep(i, n) {
    int t = ('z' - s[i] + 1) % 26;
    if (t <= k) {
      k -= t;
      s[i] = 'a';
    } else {
      continue;
    }
  }
  k %= 26;
  s[n - 1] = (char)(s[n - 1] + k);

  cout << s << endl;
}