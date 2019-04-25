#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
  int n;
  cin >> n;
  int f[50];
  f[0] = f[1] = 1;
  for (int i = 2; i <= n; i ++) f[i] = f[i - 1] + f[i - 2];

  cout << f[n] << endl;
}
