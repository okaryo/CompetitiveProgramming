#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int n;
long long ans = -1000000000;
long long F[N][10];
long long P[N][11];
int J[10];

void dfs(int s, int x, int k) {
  if (x == 10) {
    if (k == 0 || (k == 1 && s == 1)) return;

    long long sum = 0;
    for (int i = 0; i < n; i ++) {
      int t = 0;
      for (int j = 0; j < 10; j ++) {
        if (F[i][j] && J[j]) t ++;
      }
      sum += P[i][t];
    }
    ans = max(ans, sum);
    return;
  }

  if (x >= 0) J[x] = s;
  dfs(1, x + 1, k + 1);
  dfs(0, x + 1, k);
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < 10; j ++) cin >> F[i][j];
  }
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < 11; j ++) cin >> P[i][j];
  }

  dfs(0, -1, 0);

  cout << ans << endl;
}
