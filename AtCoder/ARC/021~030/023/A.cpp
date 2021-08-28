#include <bits/stdc++.h>
using namespace std;

int solve(int y, int m, int d) {
  int days;
  days = 365*y + ceil(y/4) - ceil(y/100) + ceil(y/400) +ceil(306*(m+1)/10) + d - 429;

  return days;
}

int main() {
  int y, m, d;
  cin >> y >> m >> d;

  if (m == 1 || m == 2) y --, m += 12;

  cout << solve(2014, 5, 17) - solve(y, m, d) << endl;
}
