#include <bits/stdc++.h>
using namespace std;

int main() {
  int d;
  cin >> d;

  string ans;
  if (d == 25) {
    ans = "Christmas";
  } else if (d == 24) {
    ans = "Christmas Eve";
  } else if (d == 23) {
    ans = "Christmas Eve Eve";
  } else {
    ans = "Christmas Eve Eve Eve";
  }

  cout << ans << endl;
}
