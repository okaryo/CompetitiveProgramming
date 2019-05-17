#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    a.at(i) --;
  }

  int now = 0, cnt = 0;
  while (true) {
    if (now == 1) {
      cout << cnt << endl;
      return 0;
    }
    if (cnt >= n) {
      cout << -1 << endl;
      return 0;
    }
    cnt ++;
    now = a.at(now);
  }
}
