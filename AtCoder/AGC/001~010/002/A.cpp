#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL a, b;
  cin >> a >> b;

  string ans;
  if (a > 0) {
    ans = "Positive";
  } else if (a <= 0 && b >= 0) {
    ans = "Zero";
  } else if ((b - a + 1) % 2 == 0) {
    ans = "Positive";
  } else {
    ans = "Negative";
  }

  cout << ans << endl;
}
