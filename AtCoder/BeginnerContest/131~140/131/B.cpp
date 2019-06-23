#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  int sum = 0;
  int minv = 1e9;
  int x;
  for (int i = 0; i < n; i ++) {
    sum += l + i;
    if (minv > abs(l + i)) {
      minv = abs(l + i);
      x = l + i;
    }
  }

  cout << sum - x << endl;
}