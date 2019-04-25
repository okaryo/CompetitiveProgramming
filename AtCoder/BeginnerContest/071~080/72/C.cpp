#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(100000);
  for (int i = 0; i < n; i ++) {
    int tmp; cin >> tmp;
    a.at(tmp) ++;
  }

  int ans = 0;
  for (int i = 2; i < 100000; i ++) {
    int sum_tmp = a.at(i) + a.at(i - 1) + a.at(i - 2);
    ans = max(ans, sum_tmp);
  }

  cout << ans << endl;
}
