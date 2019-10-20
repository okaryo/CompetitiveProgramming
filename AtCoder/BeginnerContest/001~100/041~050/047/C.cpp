#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int cnt = 0;
  for (int i = 1; i < s.size(); i ++) {
    if (s[i] == s[i-1]) continue;
    cnt ++;
  }

  cout << cnt << endl;
}
