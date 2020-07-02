#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n; cin >> n;
  string s; cin >> s;

  LL cnt = 0;
  vector<LL> a;
  if (s[0] == 'B') a.push_back(0);
  for (int i = 0; i < s.size(); i ++) {
    if (s[i] == 'A') cnt ++;
    else if (cnt > 0) {
      a.push_back(cnt);
      cnt = 0;
    }
  }
  a.push_back(cnt);

  LL seam = 0;
  bool flag = false;
  if (cnt > 0) {
    if (a.size() == 1) flag = true;
    else seam = a.front() + a.back();
  }

  LL ans = 0;
  if (flag) {
    LL m = n * s.size();
    ans = m * (m + 1) / 2;
  } else if (a.front() == 0 || a.back() == 0) {
    for (int i = 0 ; i < a.size(); i ++) {
      ans += n * a[i] * (a[i] + 1) / 2;
    }
  } else {
    ans = (n - 1) * (seam * (seam + 1) / 2);
    for (int i = 0; i < a.size(); i ++) {
      if (i == 0 || i == a.size() - 1) ans += a[i] * (a[i] + 1) / 2;
      else ans += n * a[i] * (a[i] + 1) / 2;
    }
  }

  cout << ans << endl;
}