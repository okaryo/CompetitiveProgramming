#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int r = 0, b = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (s[i] == 'R') r++;
    else b ++;
  }

  if (r > b) cout << "Yes" << endl;
  else cout << "No" << endl;
}