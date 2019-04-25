#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  if (k <= 1) {
    cout << s << endl;
    return 0;
  }

  vector<char> a(s.size());
  for (int i = 0; i < s.size(); i ++) a[i] = s[i];
  sort(a.begin(), a.end());

  string ans;
  int j = 0, x = 0;
  bool check[10], flag;
  for (int i = 0; i < 10; i ++) check[i] = false;

  for (int i = 0; i < s.size(); i ++) {
    for ( ; j < a.size(); j ++) {
      if (s[i] == s[j]) {
        ans += s[i];
        continue;
      }
      
      if (check[i]) {
        ans += s[j];
      } else {
        ans += s[j];
        check[i] = true;
        x ++;
      }

      if (x == k) flag = true;
    }
    if (flag) break;
  }

  if (s.size() > ans.size()) {
    ans += s.substr(ans.size(), s.size() - ans.size());
  }

  cout << ans << endl;
}