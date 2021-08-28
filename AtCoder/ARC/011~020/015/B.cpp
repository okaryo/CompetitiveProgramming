#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> ans(6, 0);
  for (int i = 0; i < n; i ++) {
    double maxv, minv;
    cin >> maxv >> minv;
    if (maxv >= 35.0) ans[0] ++;
    else if (maxv >= 30.0) ans[1] ++;
    else if (maxv >= 25.0) ans[2] ++;

    if (minv >= 25.0) ans[3] ++;
    else if (maxv >= 0.0 && minv < 0.0) ans[4] ++;
    else if (maxv < 0.0) ans[5] ++;
  }
  for (int i = 0; i < 6; i ++) {
    if (i) cout << " ";
    cout << ans[i];
  }
  cout << endl;
}