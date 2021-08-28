#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> cost(n);
  vector<int> time(n);
  for (int i = 0; i < n; i ++) {
    cin >> cost.at(i) >> time.at(i);
  }

  int ans = 1001;
  for (int i = 0; i < n; i ++) {
    if (ans >= cost.at(i) && t >= time.at(i)) {
      ans = cost.at(i);
    }
  }
  if (ans != 1001) {
    cout << ans << endl;
  } else {
    cout << "TLE" << endl;
  }
}
