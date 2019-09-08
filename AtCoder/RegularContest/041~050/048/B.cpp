#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> rate(n), te(n);
  vector<vector<int>> a(100000, vector<int>(3, 0));
  rep(i, n) {
    cin >> rate[i] >> te[i];
    rate[i] --, te[i] --;
    a[rate[i]][te[i]] ++;
  }

  vector<int> sum(100000, 0);
  for (int i = 1; i < 100000; i ++) {
    sum[i] = a[i - 1][0] + a[i - 1][1] + a[i - 1][2] + sum[i - 1];
  }

  rep(i, n) {
    int win = sum[rate[i]] + a[rate[i]][(te[i] + 1)%3];
    int lose = n - sum[rate[i]] - a[rate[i]][(te[i] + 1)%3] - a[rate[i]][te[i]];
    int hiki = a[rate[i]][te[i]] - 1;
    cout << win << " " << lose << " " << hiki << endl;
  }
}