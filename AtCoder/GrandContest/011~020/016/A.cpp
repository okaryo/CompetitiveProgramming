#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans = 100;
  for (int i = 0; i < 26; i ++) {
    int tmp = 0, cnt = 0;;
    for (int j = 0; j < s.size(); j ++) {
      if (s.at(j) == 'a' + i) {
        cnt = max(cnt, tmp);
        tmp = 0;
      } else {
        tmp ++;
      }
    }
    cnt = max(cnt, tmp);
    ans = min(ans, cnt);
  }

  cout << ans << endl;
}
