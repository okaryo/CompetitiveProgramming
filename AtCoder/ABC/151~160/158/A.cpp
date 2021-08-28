#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int a = 0, b = 0;
  for (int i = 0; i < 3; i ++) {
    if (s[i] == 'A') a ++;
    else b ++;
  }

  if (a && b) cout << "Yes" << endl;
  else cout << "No" << endl;
}
