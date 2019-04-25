#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int w = 0, flag;
  for (int i = 0; i < s.size(); i ++) {
    if (s[i] == 'W' && w == 0) {
      w ++;
      flag = i;
    } else if (s[i] == 'W') {
      w ++;
    } else if (s[i] == 'A' && w) {
      for (int j = flag; j <= i; j ++) {
        if (j == flag) s[j] = 'A';
        else s[j] = 'C';
      }
      w = 0;
    } else {
      w = 0;
    }
  }

  cout << s << endl;
}
