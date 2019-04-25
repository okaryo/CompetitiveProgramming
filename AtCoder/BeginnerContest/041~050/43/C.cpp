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
  int ans = 1000000000;
  for (int i = a.at(0); i <= a.back(); i ++) {
    int tmp_sum = 0;
    for (int j = 0; j < n; j ++) {
      tmp_sum += (i - a.at(j)) * (i - a.at(j));
    }
    ans = min(ans, tmp_sum);
  }

  cout << ans << endl;
}
