#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    sum += a.at(i);
  }

  sort(a.begin(), a.end());
  int x = a.at(n - 1);
  sum -= x;
  string ans = "Yes";
  if (x >= sum) ans = "No";

  cout << ans << endl;
}
