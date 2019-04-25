#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  int sum = 0;
  for (int i = 0; i < k; i ++) {
    sum += a.at(i);
  }

  cout << sum << endl;
}
