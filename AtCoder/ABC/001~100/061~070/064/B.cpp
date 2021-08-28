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
  int ans = a.back() - a.at(0);

  cout << ans << endl;
}
