#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  int Alice = 0, Bob = 0;
  for (int i = 0; i < n; i += 2) {
    Alice += a.at(i);
  }
  for (int i = 1; i < n; i += 2) {
    Bob += a.at(i);
  }

  int ans = Alice - Bob;
  cout << ans << endl;
}
