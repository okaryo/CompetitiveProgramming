#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;

  LL cnt = 0, bcnt = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == 'W' && i > 0 ) {
      cnt += bcnt;
    } else if (s.at(i) == 'B') {
      bcnt ++;
    }
  }

  cout << cnt << endl;
}
