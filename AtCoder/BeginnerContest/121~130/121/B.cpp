#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, C;
  cin >> N >> M >> C;
  vector<int> b(M);
  for (int i = 0; i < M; i ++) cin >> b[i];

  int ans = 0;
  for (int i = 0; i < N; i ++) {
    int sum = C;
    for (int j = 0; j < M; j ++) {
      int a; cin >> a;
      sum += a * b[j];
    }
    if (sum > 0) ans ++;
  }

  cout << ans << endl;
}
