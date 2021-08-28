#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> x(6), y(6);
  int b;
  for (int i = 0; i < 6; i ++) cin >> x.at(i);
  cin >> b;
  for (int i = 0; i < 6; i ++) cin >> y.at(i);

  int cnt = 0;
  bool B = false;
  for (int i = 0; i < 6; i ++) {
    for (int j = 0; j < 6; j ++) {
      if (y.at(i) == x.at(j)) cnt ++;
    }
    if (y.at(i) == b) B = true;
  }

  int ans;
  if (cnt == 6) ans = 1;
  else if (cnt == 5 && B) ans = 2;
  else if (cnt == 5) ans = 3;
  else if (cnt == 4) ans = 4;
  else if (cnt == 3) ans = 5;
  else ans = 0;

  cout << ans << endl;
}
