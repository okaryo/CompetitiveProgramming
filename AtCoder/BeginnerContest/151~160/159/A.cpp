#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m;
  cin >> n >> m;
  cout << n * (n - 1) / 2 + m * (m - 1) / 2 << endl;
}
