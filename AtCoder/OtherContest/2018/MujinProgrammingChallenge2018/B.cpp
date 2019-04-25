#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int cnt = n;
  string ans = "No";
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == '+') cnt ++;
    else cnt --;

    if (cnt == 0 || n == 0) {
      ans = "Yes";
      break;
    }
  }

  cout << ans << endl;
}
