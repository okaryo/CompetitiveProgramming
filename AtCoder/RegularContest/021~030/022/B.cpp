#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  set<int> s;
  int ans = 0;
  int right = 0;
  for (int left = 0; left < n; left ++) {
    while (right < n && s.find(a[right]) == s.end()) {
      s.insert(a[right]);
      right ++;
    }
    ans = max(ans, right - left);
    if (left == right) right ++;
    else s.erase(a[left]);
  }

  cout << ans << endl;
}