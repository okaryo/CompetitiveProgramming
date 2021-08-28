#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;

  int a = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (i % 2 == 0 && s[i] == '0') a ++;
    if (i % 2 == 1 && s[i] == '1') a ++;
  }

  int b = s.size() - a;
  cout << min(a, b) << endl;
}