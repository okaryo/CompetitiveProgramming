#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> a(m);
  for (int i = 0; i < m; i ++) {
    cin >> a.at(i);
  }

  int tmp = 0;
  for (int i = 0; i < m; i ++) {
    if (a.at(i) > x) {
      tmp = i; //xより前のコストの個数
      break;
    }
  }

  int ans = 0;
  if (tmp >= m / 2) {
    ans = m - tmp;
  } else {
    ans = tmp;
  }

  cout << ans << endl;
}
