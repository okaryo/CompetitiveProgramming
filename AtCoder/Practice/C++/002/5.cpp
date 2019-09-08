#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int h, w;
  cin >> h >> w;
  vector<int> num(26, 0);
  rep(i, h) rep(j, w) {
    char t; cin >> t;
    num[t - 'a'] ++;
  }

  int g1, g2, g3;
  g1 = (h % 2) * (w % 2);
  g3 = (h / 2) * (w / 2) * 4;
  g2 = h * w - g1 - g3;
  g3 /= 4, g2 /= 2;

  rep(i, 26) {
    while (num[i] >= 4 && g3 >= 1) {
      g3 --;
      num[i] -= 4;
    }
  }

  rep(i, 26) {
    while (num[i] >= 2 && g2 >= 1) {
      g2 --;
      num[i] -= 2;
    }
  }

  rep(i, 26) {
    while (num[i] >= 1 && g1 >= 1) {
      g1 --;
      num[i] --;
    }
  }

  if (g1 + g2 + g3 > 0) cout << "No" << endl;
  else cout << "Yes" << endl;
}