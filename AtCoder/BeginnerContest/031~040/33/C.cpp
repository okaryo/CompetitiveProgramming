#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int cnt = 0;
  int zero;
  for (int i = 0; i < s.size(); i ++) {
    if (s[i] == '0') zero = 1;

    if (s[i] == '+') {
      if (zero == 0) cnt ++;
      zero = 0;
    }
  }

  if (zero == 0) cnt ++;

  cout << cnt << endl;
}
