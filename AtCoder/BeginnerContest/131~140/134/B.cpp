#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  int t = 2 * d + 1;
  cout << (n + t - 1) / t << endl;
}