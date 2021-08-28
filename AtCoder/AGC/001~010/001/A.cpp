#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(2 * n);
  for (int i = 0; i < 2 * n; i ++) {
    cin >> a.at(i);
  }

  sort(a.begin(), a.end());
  int sum = 0;
  for (int i = 0; i < 2 * n; i += 2) {
    sum += a.at(i);
  }

  cout << sum << endl;
}
