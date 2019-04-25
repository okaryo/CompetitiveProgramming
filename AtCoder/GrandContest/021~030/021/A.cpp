#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  bool isNine = true;
  for (int i = 1; i < n.size(); i ++) {
    if (n.at(i) != '9') {
      isNine = false;
      break;
    }
  }

  int ans;
  if (isNine) {
    ans = int(n.at(0) - '0') + 9 * (n.size() - 1);
  } else {
    ans = int(n.at(0) - '0') + 9 * (n.size() - 1) - 1;
  }

  cout << ans << endl;
}
