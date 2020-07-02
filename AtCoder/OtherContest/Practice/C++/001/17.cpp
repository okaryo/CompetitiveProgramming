#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, p;
  cin >> n >> p;
  int sum = 0, ans = n;
  for (int i = 0; i < n; i ++) {
    int t; cin >> t;
    if (sum + t <= p) sum += t;
    else {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}