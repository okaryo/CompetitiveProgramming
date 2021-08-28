#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL n;
LL ans = 0, three, five, seven;
string tmp;

void solve(LL a) {
  if (a > n) return;

  three = 0, five = 0, seven = 0;
  tmp = to_string(a);

  for (int i = 0; i < tmp.size(); i ++) {
    if (tmp[i] == '3') three ++;
    else if (tmp[i] == '5') five ++;
    else if (tmp[i] == '7') seven ++;
  }
  if (three && five && seven) ans ++;

  solve(a*10 + 3);
  solve(a*10 + 5);
  solve(a*10 + 7);
}

int main() {
  cin >> n;

  solve(0);

  cout << ans << endl;
}
