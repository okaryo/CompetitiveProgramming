#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n), c(n);
  for (int i = 0; i < n; i ++) cin >> v[i];
  for (int i = 0; i < n; i ++) cin >> c[i];
  int sum = 0;
  for (int i = 0; i < n; i ++) {
    if (v[i] > c[i]) {
      sum += v[i] - c[i];
    }
  }

  cout << sum << endl;
}