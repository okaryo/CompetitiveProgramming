#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> ans;
  for (int i = 2; i <= 55555; i ++) {
    if (i % 5 == 1) {
      bool flag = true;
      for (int j = 2; j * j <= i; j ++) {
        if (i % j == 0) flag = false;
      }
      if (flag) ans.push_back(i);
    }
  }

  rep(i, n) {
    if (i) cout << " ";
    cout << ans[i];
  }
  cout << endl;
}