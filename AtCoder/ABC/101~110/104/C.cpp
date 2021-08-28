#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int D, G;
  cin >> D >> G;
  vector<int> p(D), c(D);
  for (int i = 0; i < D; i ++) {
    cin >> p[i] >> c[i];
  }

  int ans = 1e9;
  for (int i = 0; i < (1 << D); i ++) {
    int cnt = 0;
    int score = 0;
    for (int j = 0; j < D; j ++) {
      if (i >> j & 1) {
        cnt += p[j];
        score += p[j] * (j + 1) * 100;
        score += c[j];
      }
    }
    for (int j = D - 1; j >= 0; j --) {
      if (~i >> j & 1) {
        for (int k = 0; k < p[j] && score < G; k ++) {
          score += (j + 1) * 100;
          cnt ++;
        }
      }
    }

    if (score >= G) {
      ans = min(ans, cnt);
    }
  }

  cout << ans << endl;
}
