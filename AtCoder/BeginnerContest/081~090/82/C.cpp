#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  LL ar[100000];
  for (int i = 0; i < n; i ++) {
    cin >> ar[i];
  }
  map<int, int> mp;
  for (int i = 0; i < n; i ++) {
    mp[ar[i]] ++;
  }

  int ans = 0;
  for (auto p: mp) {
    int x = p.first;
    int n = p.second;
    if  (x <= n) ans += n - x;
    else ans += n;
  }

  cout << ans << endl;
}
