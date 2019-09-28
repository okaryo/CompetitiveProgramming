#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int h, w, a, b;
  cin >> h >> w >> a >> b;

  for (int i = 1; i <= h; i ++) {
    for (int j = 1; j <= w; j ++) {
      if ((j <= a && i <= b) || (a < j && b < i)) cout << 1;
      else cout << 0;
    }
    cout << endl;
  }
}