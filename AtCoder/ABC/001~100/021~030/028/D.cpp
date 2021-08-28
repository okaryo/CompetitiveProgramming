#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, k;
  cin >> n >> k;

  double sum = (k - 1) * (n - k) * 6 + (n - 1) * 3 + 1;
  double n_three = n * n * n;

  cout << setprecision(15) << sum / n_three << endl;
}
