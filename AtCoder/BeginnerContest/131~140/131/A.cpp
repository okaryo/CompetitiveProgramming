#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = "Good";
  for (int i = 1; i < 4; i ++) {
    if (s[i] == s[i - 1]) ans = "Bad";
  }
  cout << ans << endl;
}