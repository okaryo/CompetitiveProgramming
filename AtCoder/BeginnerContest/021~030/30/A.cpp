#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  double x = b / a;
  double y = d / c;

  string ans;
  if (x > y) {
    ans = "TAKAHASHI";
  } else if (x == y) {
    ans = "DRAW";
  } else {
    ans = "AOKI";
  }
  cout << ans << endl;
}
