#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int main() {
  vector<string> s(10);
  int cnt = 0;
  for (int i = 0; i < 10; i ++) {
    cin >> s[i];
    for (int j = 0; j < 10; j ++) {
      if (s[i][j] == 'o') cnt ++;
    }
  }
  
  string ans = "NO";
  for (int i = 0; i < 10; i ++) {
    for (int j = 0; j < 10; j ++) {
      int sum = 0;
      if (s[i][j] == 'o') sum ++;
      int g[10][10] = {};
      g[i][j] = 1;
      queue<pair<int, int>> q;
      q.push(make_pair(i, j));
      while (!q.empty()) {
        pair<int, int> u;
        u = q.front(); q.pop();
        int x = u.first;
        int y = u.second;
        for (int k = 0; k < 4; k ++) {
          int nx = x + dx[k];
          int ny = y + dy[k];
          if (nx >= 0 && nx < 10 && ny >= 0 && ny < 10 && g[nx][ny] == 0 && s[nx][ny] == 'o') {
            q.push(make_pair(nx, ny));
            g[nx][ny] = 1;
            sum ++;
          }
        }
      }
      if (sum == cnt) ans = "YES";
    }
  }

  cout << ans << endl;
}