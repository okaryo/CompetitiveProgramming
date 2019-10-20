#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int q;
  cin >> q;
  vector<int> a(100001, 0);
  a[2] = 1;
  for (int i = 3; i <= 100000; i += 2) {
    bool flag = true;
    for (int j = 2; j * j <= i; j ++) {
      if (i % j == 0) {
        flag = false;
        break;
      }
    }
    if (flag) {
      a[i] = 1;
      if (a[(i + 1) / 2]) a[i] = 2;
    }
  }

  vector<int> sum(100001, 0);
  for (int i = 1; i <= 100000; i ++) {
    sum[i] = sum[i - 1];
    if (a[i] == 2) sum[i] ++;
  }

  for (int i = 0; i < q; i ++) {
    int l, r;
    cin >> l >> r;
    cout << sum[r] - sum[l - 1] << endl;
  }
}