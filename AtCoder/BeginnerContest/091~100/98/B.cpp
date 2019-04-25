#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    int cnt = 0;
    for (char x = 'a'; x <= 'z'; x ++) {
      bool left = false, right = false;

      for (int j = 0; j < i; j ++) {
        if (s.at(j) == x) {
          left = true;
        }
      }
      for (int j = i; j < n; j ++) {
        if (s.at(j) == x) {
          right = true;
        }
      }
      if (left && right) {
        cnt ++;
      }
    }
    if (ans < cnt) {
      ans = cnt;
    }
  }
  cout << ans << endl;
}
