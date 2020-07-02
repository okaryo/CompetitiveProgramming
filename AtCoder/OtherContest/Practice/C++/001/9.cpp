#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i ++) {
    string ans = "";
    if (i % 2 == 0) ans += 'a';
    if (i % 3 == 0) ans += 'b';
    if (i % 4 == 0) ans += 'c';
    if (i % 5 == 0) ans += 'd';
    if (i % 6 == 0) ans += 'e';

    if (ans == "") cout << i << endl;
    else cout << ans << endl;
  }
}