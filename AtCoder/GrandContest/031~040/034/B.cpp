#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.size() < 3) {
    cout << 0 << endl;
    return 0;
  }
  vector<LL> sum;
  LL tmp = 0;
  LL ans = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (s[i] == 'A') tmp ++;
    else if (i <= (int)s.size() - 2 && s.substr(i, 2) == "BC") {
      sum.push_back(tmp);
      tmp = 0;
      i ++;
      if (sum.size() == 1) {
        ans += sum[0];
      } else {
        if (sum[sum.size() - 2] == -1) ans += sum.back();
        else {
          sum.back() += sum[sum.size() - 1];
          ans += sum.back();
        }
      }
    } else {
      tmp = 0;
      if (sum.back() != -1) sum.push_back(-1);
    }
  }
/*
  LL ans = 0;
  LL d[200010];
  for (int i = 0; i < sum.size(); i ++) d[i] = 0;
  for (int i = 0; i < sum.size(); i ++) {
    if (sum[i] == -1) {
      d[i] = 0;
    } else if (i > 0) {
      d[i] = sum[i] + d[i - 1];
      ans += d[i];
    } else if (i == 0) {
      d[i] = sum[i];
      ans += d[i];
    }
  }
*/
  cout << ans << endl;
}