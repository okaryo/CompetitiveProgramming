#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(2, vector<int> (n));
  for (int i = 0; i < 2; i ++) {
    for (int j = 0; j < n; j ++) {
      cin >> a.at(i).at(j);
    }
  }

  int ans = 0, res = 0;
  for (int i = 0; i < n; i ++) {
    res += a.at(0).at(i);
    int tmp = res;
    for (int j = i; j < n; j ++) {
      tmp += a.at(1).at(j);
    }
    ans = max(ans, tmp);
  }

  cout << ans << endl;
}
