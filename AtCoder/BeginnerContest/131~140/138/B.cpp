#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  double sum = 0;
  rep(i, n) {
    double a; cin >> a;
    sum += 1.0 / a;
  }
  cout << setprecision(15) << 1.0 / sum << endl;
}