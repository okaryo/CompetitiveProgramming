#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt = 0;
  cin >> n;
  vector<int> a(n);
  int tmp = 1;
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    if (i == 0) continue;

    if (a.at(i) == a.at(i - 1)) {
      tmp ++;
      continue;
    }
    if (a.at(i) != a.at(i - 1) && tmp > 1) {
      cnt += tmp / 2;
      tmp = 1;
    }
  }
  if (tmp > 1) {
    cnt += tmp / 2;
  }

  cout << cnt << endl;
}
