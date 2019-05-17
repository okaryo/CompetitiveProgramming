#include <bits/stdc++.h>
using namespace std;

int n, m;
int t[5][5];
string ans;

bool dfs(int now, int v) {
  if (now == n) return (v == 0);

  for (int i = 0; i < m; i ++) {
    if (dfs(now+1, v ^ t[now][i])) return true;
  }

  return false;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) cin >> t[i][j];
  }

  if (dfs(0, 0)) ans = "Found";
  else ans = "Nothing";

  cout << ans << endl;
}
