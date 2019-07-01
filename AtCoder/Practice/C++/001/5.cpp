#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> point(n + 1, 0);
  vector<int> target(m);
  for (int i = 0; i < m; i ++) cin >> target[i];

  for (int i = 0; i < m; i ++) {
    int sum = 0;
    for (int j = 1; j <= n; j ++) {
      int t; cin >> t;
      if (t == target[i]) point[j] ++;
      else sum ++;
    }
    point[target[i]] += sum;
  }

  for (int i = 1; i <= n; i ++) cout << point[i] << endl;
}