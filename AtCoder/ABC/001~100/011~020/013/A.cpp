#include <bits/stdc++.h>
using namespace std;

int main() {
  char x;
  cin >> x;

  int ans;
  if (x == 'A') {
    ans = 1;
  } else if (x == 'B') {
    ans = 2;
  } else if (x == 'C') {
    ans = 3;
  } else if (x == 'D') {
    ans = 4;
  } else {
    ans = 5;
  }

  cout << ans << endl;
}
