#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  int ans = -1000;
  for (int i = 0; i < 3; i ++) {
    string s = a;
    s[i] = '9';
    int t = stoi(s) - stoi(b);
    ans = max(ans, t);
  }
  for (int i = 0; i < 3; i ++) {
    string s = b;
    if (i == 0) s[i] = '1';
    else s[i] = '0';
    int t = stoi(a) - stoi(s);
    ans = max(ans, t);
  }

  cout << ans << endl;
}
