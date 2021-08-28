#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, r;
  cin >> n >> r;
  if (n >= 10) {
    cout << r << endl;
  } else {
    cout << r + 100 * (10 - n) << endl;
  }
}
