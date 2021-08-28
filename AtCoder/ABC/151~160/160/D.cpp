#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  x --, y --;

  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    for (int j = i + 1; j < n; j ++) {
      int t = min({j - i, abs(j - x) + 1 + abs(y - i), abs(j - y) + 1 + abs(x - i)});
      a[t] ++;
    }
  }

  for (int i = 1; i < n; i ++) {
    cout << a[i] << endl;
  }
}
