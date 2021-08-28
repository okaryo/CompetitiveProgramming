#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s; cin >> s;

  int ans = 0, t = 0;
  for (int i = 0; i < s.size(); i ++) {
    if ((s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C') && i == s.size() - 1) {
      t ++;
      ans = max(ans, t);
    } else if (s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C') {
      t ++;
    } else {
      ans = max(ans, t);
      t = 0;
    }
    
  }


  cout << ans << endl;
}