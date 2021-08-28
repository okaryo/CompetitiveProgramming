#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  LL sum = 0, cnt = 0;
  vector<LL> a(n);
  bool flag = false;
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    if (a[i] < 0) {
      a[i] *= -1;
      cnt ++;
    }
    sum += a[i];
    if (a[i] == 0) flag = true;
  }
  if (flag) {
    cout << sum << endl;
    return 0;
  }

  if (cnt % 2 != 0) {
    sort(a.begin(), a.end());
    sum -= a[0] * 2;
  }

  cout << sum << endl;
}