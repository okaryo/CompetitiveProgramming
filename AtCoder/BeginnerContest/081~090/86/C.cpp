#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  vector<int> x(n);
  vector<int> y(n);
  for (int i = 0; i < n; i ++) {
    cin >> t.at(i) >> x.at(i) >> y.at(i);
  }

  string ans = "Yes";
  int now_pointX = 0, now_pointY = 0, now_time = 0;
  for (int i = 0; i < n; i ++) {
    int time  = t.at(i) - now_time;
    int point = abs(x.at(i) - now_pointX) + abs(y.at(i) - now_pointY);
    if (time < point || time%2 != point%2) {
      ans = "No";
      break;
    }
    now_pointX = x.at(i), now_pointY = y.at(i), now_time = t.at(i);
  }

  cout << ans << endl;
}
