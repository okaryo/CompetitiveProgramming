#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int q; cin >> q;
  bool check = true;
  string r = "", l = "";
  for (int i = 0; i < q; i ++) {
    int t; cin >> t;
    if (t == 1) {
      check = !check;
    } else {
      int f; cin >> f;
      string c; cin >> c;
      if ((f == 1 && check) || (f == 2 && !check)) {
        r += c;
      } else {
        l += c;
      }
    }
  }

  reverse(all(r));
  s = r + s + l;

  if (!check) {
    reverse(all(s));
  }

  cout << s << endl;
}
