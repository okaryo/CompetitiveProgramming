#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a[20];
  for (int i = 1; i < n; i ++) {
    int t; cin >> t;
    a[t-1].push_back(i);
  }

  vector<int> s(n, 0), mins(n, 1e9), maxs(n, 0);
  for (int i = n-1; i >= 0; i --) {
    if (a[i].size() == 0) {
      s[i] = 1;
      continue;
    }

    for (int j = 0; j < a[i].size(); j ++) {
      maxs[i] = max(maxs[i], s[a[i][j]]);
      mins[i] = min(mins[i], s[a[i][j]]);
    }
    s[i] = maxs[i] + mins[i] + 1;
  }

  cout << s[0] << endl;
}