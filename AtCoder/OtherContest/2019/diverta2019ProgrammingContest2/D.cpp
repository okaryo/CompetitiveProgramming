#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(3), b(3);
  for (int i = 0; i < 3; i ++) cin >> a[i];
  for (int i = 0; i < 3; i ++) cin >> b[i];
  vector<tuple<int, int, int>> s, t;
  for (int i = 0; i < 3; i ++) {
    if (a[i] < b[i]) {
      s.push_back(make_tuple(b[i] - a[i], a[i], b[i]));
    } else {
      t.push_back(make_tuple(a[i] - b[i], a[i], b[i]));
    }
  }
  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());
  sort(t.begin(), t.end());
  reverse(t.begin(), t.end());

  int ans = n;
  int tmp = n, money = 0;
  for (int i = 0; i < s.size(); i ++) {
    int x, y, z;
    tie(x, y, z) = s[i];
  }

  cout << ans << endl;
}
//お金を考慮する必要あり