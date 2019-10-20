#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i =0; i < n; i ++) {
    cin >> a.at(i);
  }

  int sum = 0, tmp = x;
  for (int i = n - 1; i >= 0; i --) {
    if (tmp / pow(2, i) >= 1) {
      sum += a.at(i);
      tmp -= pow(2, i);
    }
  }

  cout << sum << endl;
}
