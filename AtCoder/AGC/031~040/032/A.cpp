#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];
  
  vector<int> ans;
  int flag = -1;
  for (int i = 0; i < n; i ++) {
    flag = false;
    for (int j = 0; j < a.size(); j ++) {
      if (a[j] > j + 1) {
        cout << "-1" << endl;
        return 0;
      }
      if (a[j] == j + 1) flag = j;
    }
    if (flag == -1) {
      cout << "-1" << endl;
      return 0;
    }
    ans.push_back(flag + 1);
    a.erase(a.begin() + flag);
  }

  reverse(ans.begin(), ans.end());
  for (int i : ans) cout << i << endl;

}