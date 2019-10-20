#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int x, y;
  cin >> x >> y;
  int n = s.size();

  vector<int> a;
  int f_sum = 0;
  if (s[0] == 'T') a.push_back(f_sum);
  rep(i, n) {
    if (s[i] == 'T') {
      a.push_back(f_sum);
      f_sum = 0;
    } else {
      f_sum ++;
    }
  }
  a.push_back(f_sum);

  int now_x = 0, now_y = 0;
  for (int i = 0; i < a.size(); i += 2) {
    if (now_x <= x) now_x += a[i];
    else now_x -= a[i];
  }
  for (int i = 1; i < a.size(); i += 2) {
    if (now_y <= y) now_y += a[i];
    else now_y -= a[i];
  }

  if (now_x == x && now_y == y) cout << "Yes" << endl;
  else cout << "No" << endl;
}