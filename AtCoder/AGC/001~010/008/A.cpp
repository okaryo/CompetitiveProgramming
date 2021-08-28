#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  int count_A   = y - x;
  int count_AB  = -y - x + 1;
  int count_BA  = y + x + 1;
  int count_BAB = -y + x + 2;

  vector<int> ans = {count_A, count_AB, count_BA, count_BAB};
  sort(ans.begin(), ans.end());
  for (int i = 0; i < 4; i ++) {
    if (ans.at(i) > 0) {
      cout << ans.at(i) << endl;
      return 0;
    }
  }
}
