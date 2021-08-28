#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  vector<int> a(3);
  for (int i = 0; i < 3; i ++) cin >> a[i];
  sort(a.begin(), a.end());
  int ans = a[0] + a[1];
  cout << ans << endl;
}