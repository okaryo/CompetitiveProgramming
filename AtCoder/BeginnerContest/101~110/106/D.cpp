#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int N, M, Q;
  cin >> N >> M >> Q;
  int L[200009], R[200009], X[509][509], C[509][509];
  for (int i = 1; i <= M; i ++) {
    cin >> L[i] >> R[i];
    X[L[i]][R[i]] ++;
  }

  for (int i = 1; i <= N; i ++) {
    for (int j = 1; j <= N; j ++) {
      C[i][j] = C[i][j - 1] + X[i][j];
    }
  }

  for (int i = 1; i <= Q; i ++) {
    int p, q;
    cin >> p >> q;
    int sum = 0;
    for (int j = p; j <= q; j ++) sum += C[j][q] - C[j][p - 1];
    cout << sum << endl;
  }
}
