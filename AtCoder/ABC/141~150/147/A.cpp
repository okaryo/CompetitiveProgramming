#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int x = a + b + c;

  if (x >= 22) {
    cout << "bust" << endl;
  } else {
    cout << "win" << endl;
  }
}