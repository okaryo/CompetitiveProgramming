#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int a, b;
  cin >> a >> b;
  if (a > 9 || b > 9) {
    cout << -1 << endl;
  } else {
    cout << a * b << endl;
  }
}