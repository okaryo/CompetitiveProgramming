#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n; cin >> n;
  
  int max_length = 9 * to_string(n).size();
  vector<LL> ans;
  for (LL i = 1; i <= min(153, max_length); i ++) {
    LL sum = 0;
    LL tmp = n - i;
    while (tmp > 0) {
      sum += tmp % 10;
      tmp /= 10;
    }
    if (sum == i) ans.push_back(n - i);
  }

  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i ++) cout << ans[i] << endl;
}