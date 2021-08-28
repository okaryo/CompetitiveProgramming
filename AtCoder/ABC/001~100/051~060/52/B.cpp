#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int tmp = 0, ans = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == 'I') {
      tmp ++;
    } else {
      tmp --;
    }
    if (tmp >= ans) {
      ans = tmp;
    }
  }

  cout << ans << endl;
}
