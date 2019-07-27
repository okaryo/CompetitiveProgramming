#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int a, b;
  cin >> a >> b;
  int c = abs(a + b);
  if (c % 2 == 0) {
    cout << c / 2 << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
}