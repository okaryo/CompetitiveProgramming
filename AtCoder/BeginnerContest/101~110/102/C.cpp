#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    int tmp; cin >> tmp;
    a.at(i) = tmp - i - 1;
  }

  sort(a.begin(), a.end());
  int med = a.at(n / 2);
  LL ans = 0;
  for (int i = 0; i < n; i ++) {
    ans += abs(a.at(i) - med);
  }

  cout << ans << endl;
}
