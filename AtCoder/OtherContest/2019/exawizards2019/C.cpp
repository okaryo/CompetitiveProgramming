#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int N, Q;
  string s;
  cin >> N >> Q >> s;
  vector<char> t(Q), d(Q);
  for (int i = 0; i < Q; i ++) cin >> t[i] >> d[i];

  int l , r;
  int left, right, mid, tmp;
  bool flag;
  //左から落ちるゴーレムのうち、最も右端にいるものを探す
  left = 0, right = N;
  while (left < right) {
    mid = tmp = (left + right) / 2;
    flag = false;
    for (int i = 0; i < Q; i ++) {
      if (t[i] != s[tmp]) continue;

      if (d[i] == 'R') tmp ++;
      else tmp --;

      if (tmp == -1) flag = true;
    }
    if (flag) left = mid + 1;
    else right = mid;
  }
  if (flag) l = mid;
  else l = mid - 1;

  //右から落ちるゴーレムのうち、最も左端にいるものを探す
  left = 0, right = N;
  while (left < right) {
    mid = tmp = (left + right) / 2;
    flag = false;
    for (int i = 0; i < Q; i ++) {
      if (t[i] != s[tmp]) continue;

      if (d[i] == 'R') tmp ++;
      else tmp --;

      if (tmp == N) flag = true;
    }
    if (flag) right = mid;
    else left = mid + 1;
  }
  if (flag) r = mid;
  else r = mid + 1;

  int ans;
  if (r > l) ans = r - l - 1;
  else ans = 0;

  cout << ans << endl;
}