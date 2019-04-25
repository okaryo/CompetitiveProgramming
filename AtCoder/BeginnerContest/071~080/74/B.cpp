#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  int sum = 0;
  for (int i = 0; i < n; i ++) {
    int x = a.at(i);
    int y = abs(k - a.at(i));
    sum += min(x, y) * 2;
  }

  cout << sum << endl;
}
