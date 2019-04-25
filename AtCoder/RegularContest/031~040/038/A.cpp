#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a.at(i);

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < n; i += 2) {
    ans += a.at(i);
  }

  cout << ans << endl;
}
