#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    sum += a.at(i);
  }

  if (sum % n != 0) {
    cout << -1 << endl;
    return 0;
  } else {
    int ave = sum / n, cnt = 0, tsum = 0, tmp = 0;
    for (int i = 0; i < n; i ++) {
      tsum += a.at(i);
      tmp ++;
      if (ave * tmp == tsum) {
        tsum = 0;
        tmp = 0;
      } else {
        cnt ++;
      }
    }
    cout << cnt << endl;
  }
}
