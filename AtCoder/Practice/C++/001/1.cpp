#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;

  bool check = true;
  int two = 0;
  int ans = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (s[i] == '2') two ++;
    else two --;
    if (two < 0) check = false;
    ans = max(ans, two);
  }
  if (!check || two > 0) {
    ans = -1;
  }
  cout << ans << endl;
}