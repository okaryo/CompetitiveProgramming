#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n;
  cin >> n;
  vector<LL> a(n);
  vector<LL> b(n + 1);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    b.at(i + 1) = b.at(i) + a.at(i);
  }

  LL cnt = 0;
  LL tmp = 1;
  sort(b.begin(), b.end());
  for (int i = 1; i <= n; i ++) {
    if (b.at(i) == b.at(i - 1)) {
      tmp ++;
    } else {
      cnt += (tmp * (tmp - 1)) / 2; //nC2の組み合わせ
      tmp = 1;
    }
  }
  cnt += (tmp * (tmp - 1)) / 2;

  cout << cnt << endl;
}
