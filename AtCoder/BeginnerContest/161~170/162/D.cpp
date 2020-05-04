#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n;
  string s;
  cin >> n >> s;

  LL r = 0, g = 0, b = 0;
  for (int i = 0; i < n; i ++) {
    if (s[i] == 'R') r ++;
    else if (s[i] == 'G') g ++;
    else if (s[i] == 'B') b ++;
  }

  LL cnt = 0;
  for (int i = 0; i < n; i ++) {
    for (int j = i + 1; j < n; j ++) {
      int k = j + (j - i);
      if (k >= n) continue;
      if (s[i] != s[j] && s[j] != s[k] && s[i] != s[k]) cnt ++;
    }
  }

  cout << r * g * b - cnt << endl;
}
