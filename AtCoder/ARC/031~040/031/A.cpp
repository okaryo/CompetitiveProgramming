#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string ans = "YES";
  for (int i = 0; i < s.size() / 2; i ++) {
    char t = s.at(s.size()-i-1);
    if (s.at(i) != t) {
      ans = "NO";
      break;
    }
  }

  cout << ans << endl;
}
