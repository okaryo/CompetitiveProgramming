#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  int ans = 100;
  for (int i = 0; i < n; i ++) {
    if (a.at(i) <= ans) {
      ans = a.at(i);
    }
  }
  cout << ans << endl;
}
