#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  int sum = 0;
  for (int i = 0; i < n - 1; i ++) {
    for (int j = i + 1; j < n; j ++) {
      sum += abs(a.at(i) - a.at(j));
    }
  }

  cout << sum << endl;
}
