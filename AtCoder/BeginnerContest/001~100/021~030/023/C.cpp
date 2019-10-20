#include <bits/stdc++.h>
using namespace std;

const int MAX = 100010;
long long r[MAX], c[MAX];
long long cntr[MAX], cntc[MAX];
long long sumr[MAX], sumc[MAX];

int main() {
  int R, C, K, n;
  cin >> R >> C >> K >> n;
  for (int i = 0; i < n; i ++) {
    int x, y; cin >> x >> y;
    x --, y --;
    r[i] = x, c[i] = y;
    cntr[x] ++, cntc[y] ++;
  }

  for (int i = 0; i < R; i ++) sumr[cntr[i]] ++;
  for (int i = 0; i < C; i ++) sumc[cntc[i]] ++;
  long long ans = 0;
  for (int i = 0; i <= K; i ++) ans += sumr[i] * sumc[K - i];

  for (int i = 0; i < n; i ++) {
    if (cntr[r[i]] + cntc[c[i]] == K) ans --;
    else if (cntr[r[i]] + cntc[c[i]] == K + 1) ans ++;
  }

  cout << ans << endl;
}
