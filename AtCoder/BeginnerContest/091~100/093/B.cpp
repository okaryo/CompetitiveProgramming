#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;

  vector<int> ans = {a, b};
  if (a == b) {
    cout << a << endl;
  } else if (b - a >= 2 * k) {
    for (int i = 1; i < k; i ++) {
      ans.push_back(a + i);
      ans.push_back(b - i);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i ++) {
      cout << ans.at(i) << endl;
    }
  } else {
    for (int i = 1; i < b - a; i ++) {
      ans.push_back(a + i);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i ++) {
      cout << ans.at(i) << endl;
    }
  }
}
