#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int x = (a + d - 1) / d;
  int y = (c + b - 1) / b;

  if (x >= y) cout << "Yes" << endl;
  else cout << "No" << endl;
}
