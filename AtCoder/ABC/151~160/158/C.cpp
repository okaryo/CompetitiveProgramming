#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int a, b;
  cin >> a >> b;

  for (int i = 1; i <= 1100; i ++) {
    int x = i * 0.08;
    int y = i * 0.1;
    if (a == x && b == y) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}
